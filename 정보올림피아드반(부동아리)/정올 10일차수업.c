#include <stdio.h>
#include <string.h>

//백준 2468번 안전영역

//Flood-Fill

/*
int idx = 1;//경우의 수 
int max = 1;

int arr[101][101];
int brr[101][101];
int n;
int count = 1;//상하좌우
int cnt;//영역의 개수

int i, j;

void paint();
void f();
void fill();
void CCC(int c);

int main(){

	scanf("%d",&n);

	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	while (1){
		paint();
		for (i = 0; i < n; i++){
			for (j = 0; j < n; j++){
				if (arr[i][j] != 0){
					f(arr[i][j]);
					cnt++;
				}
			}
		}
		if (cnt == 0){
			break;
		}
		memset(arr, 0, 10201);
		max = (cnt > max) ? cnt : max;
		idx++;
		cnt = 0;
	}

	printf("%d", max);
	return 0;
}

void paint(){
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			if (arr[i][j] <= idx){
				arr[i][j] = 0;
			}
		}
	}
}

void f(int a){
	a = 0;
	count = 1;

	while (1){	
		CCC(count);
		count++;
		if (count == 5){
			break;
		}
	}
	count = 1;
}

void CCC(int c){
	switch (c){
	case 1:
		if (arr[i - 1][j] != 0 && i - 1 >= 0 ){//상
			f(arr[i - 1][j]);
		}break;
	case 2:
		if (arr[i + 1][j] != 0 && i + 1 < n){//하
			f(arr[i + 1][j]);
		}break;
	case 3:
		if (arr[i][j - 1] != 0 && j - 1 >= 0){//좌
			f(arr[i][j - 1]);
		}break;
	case 4:
		if (arr[i][j + 1] != 0 && j + 1 < n){//우
			f(arr[i][j + 1]);
		}break;
	default:
		break;
	}
}

*/

/*
}

	//선생님이 짜신 안전 영역 코드

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 101
 
#define COORD(x, y)  (struct Coordinate){(x), (y)}
#define LEFT(coord)  (struct Coordinate){(coord).x, (coord).y - 1}
#define RIGHT(coord) (struct Coordinate){(coord).x, (coord).y + 1}
#define UP(coord)    (struct Coordinate){(coord).x - 1, (coord).y}
#define DOWN(coord)  (struct Coordinate){(coord).x + 1, (coord).y}
 
struct Coordinate {
    unsigned int x;
    unsigned int y;
};
 
//입력받은 지형
unsigned int terrain[MAX_SIZE][MAX_SIZE];
unsigned int terrain_size;
 
//BFS
int visited[MAX_SIZE][MAX_SIZE];
struct Coordinate queue[MAX_SIZE * MAX_SIZE];
unsigned int head, tail;
 
//visited table에 관한 함수
void mark_as_visited(const struct Coordinate coord){
    visited[coord.y][coord.x] = 1;
}
 
int is_visited(const struct Coordinate coord){
    return visited[coord.y][coord.x];
}
 
void reset_table(){
    memset(visited, 0, MAX_SIZE * MAX_SIZE);
}
 
//큐에 관한 함수
void enqueue(const struct Coordinate n){
    mark_as_visited(COORD(n.x, n.y));
    queue[head] = n;
    head = (head + 1) % (MAX_SIZE * MAX_SIZE);
}
 
struct Coordinate dequeue(){
    struct Coordinate ret = queue[tail];
    tail = (tail + 1) % (MAX_SIZE * MAX_SIZE);
    return ret;
}
 
void enqueue_adjacencies(const struct Coordinate src){
    if(src.y > 0 && !is_visited(LEFT(src))) //왼쪽
        enqueue(LEFT(src));
    if(src.y < terrain_size-1 && !is_visited(RIGHT(src))) //오른쪽
        enqueue(RIGHT(src));
    if(src.x > 0 && !is_visited(UP(src))) //위
        enqueue(UP(src));
    if(src.x < terrain_size-1 && !is_visited(DOWN(src))) //아래
        enqueue(DOWN(src));
}
 
//지형에 관한 함수
void fill_with(const struct Coordinate src){
    enqueue(src);
    while(head != tail)
        enqueue_adjacencies(dequeue());
}
 
void mark_underwater(const unsigned int level){
    int i, j;
 
    for(i = 0; i < terrain_size; ++i){
        for(j = 0; j < terrain_size; ++j){
            if(terrain[j][i] <= level)
                visited[j][i] = 1;
        }
    }
}
 
int max_water_level(){
    int i, j, max = 0;
    for(i = 0; i < terrain_size; ++i){
        for(j = 0; j < terrain_size; ++j){
            max = (terrain[j][i] > max) ? terrain[j][i] : max;
        }
    }
    return max;
}
 
int main(){
    int i, j, level;
    int max = 1; //답으로 가능한 최소값은 1이므로
    int max_level;
    scanf("%d", &terrain_size);
 
    for(i = 0; i < terrain_size; ++i){
        for(j = 0; j < terrain_size; ++j){
            scanf("%d", &terrain[j][i]);
        }
    }
 
    max_level = max_water_level();
 
    for(level = 1; level < max_level; ++level){
        int cnt = 0;
        reset_table();
        mark_underwater(level);
        for(i = 0; i < terrain_size; ++i){
            for(j = 0; j < terrain_size; ++j){
                if(!is_visited(COORD(j, i))){
                    fill_with(COORD(j, i));
                    cnt++;
                }
            }
        }
        max = (cnt > max) ? cnt : max;
    }
   
    printf("%d", max);
    return 0;
}

*/

//Single source shortest path (Dijkstra)

int calc();

int main(){
	int distance[100];
	int d[100];
	int precedessor[100] = {0};
	int visited[100] = {0};
	int a, b;
	int i, j;

	scanf("%d %d", &a, &b);

	for (i = 0; i < 6; i++){
		scanf("%d", &d[i]);
	}

	memset(distance, 0x7FFFFFFF, 100);
	distance[0] = 0;

}

int calc(){


}

//다음시간에 이어서