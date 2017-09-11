#include <stdio.h>
#include <string.h>

//���� 2468�� ��������

//Flood-Fill

/*
int idx = 1;//����� �� 
int max = 1;

int arr[101][101];
int brr[101][101];
int n;
int count = 1;//�����¿�
int cnt;//������ ����

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
		if (arr[i - 1][j] != 0 && i - 1 >= 0 ){//��
			f(arr[i - 1][j]);
		}break;
	case 2:
		if (arr[i + 1][j] != 0 && i + 1 < n){//��
			f(arr[i + 1][j]);
		}break;
	case 3:
		if (arr[i][j - 1] != 0 && j - 1 >= 0){//��
			f(arr[i][j - 1]);
		}break;
	case 4:
		if (arr[i][j + 1] != 0 && j + 1 < n){//��
			f(arr[i][j + 1]);
		}break;
	default:
		break;
	}
}

*/

/*
}

	//�������� ¥�� ���� ���� �ڵ�

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
 
//�Է¹��� ����
unsigned int terrain[MAX_SIZE][MAX_SIZE];
unsigned int terrain_size;
 
//BFS
int visited[MAX_SIZE][MAX_SIZE];
struct Coordinate queue[MAX_SIZE * MAX_SIZE];
unsigned int head, tail;
 
//visited table�� ���� �Լ�
void mark_as_visited(const struct Coordinate coord){
    visited[coord.y][coord.x] = 1;
}
 
int is_visited(const struct Coordinate coord){
    return visited[coord.y][coord.x];
}
 
void reset_table(){
    memset(visited, 0, MAX_SIZE * MAX_SIZE);
}
 
//ť�� ���� �Լ�
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
    if(src.y > 0 && !is_visited(LEFT(src))) //����
        enqueue(LEFT(src));
    if(src.y < terrain_size-1 && !is_visited(RIGHT(src))) //������
        enqueue(RIGHT(src));
    if(src.x > 0 && !is_visited(UP(src))) //��
        enqueue(UP(src));
    if(src.x < terrain_size-1 && !is_visited(DOWN(src))) //�Ʒ�
        enqueue(DOWN(src));
}
 
//������ ���� �Լ�
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
    int max = 1; //������ ������ �ּҰ��� 1�̹Ƿ�
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

//�����ð��� �̾