#include <stdio.h>

//구조체 설명

/*
#define MON 1
#define TUE 2
#define WED 3
#define THU 4
#define FRI 5
#define SAT 6
#define SUN 7

//Enumerations
typedef
enum days{ Mon = 1, Tue, Wed, Thu, Fri, Sat, Sun }
Days;//Mon부터 0 1 2 3 4 5...앞에 숫자를 지정해 주면 뒤의 값들은 전부 1씩증가됨 안하면 처음이 0으로 지정
//위 define으로 쓴거랑 같음

union s{//c와 d는 같은 주소값을 가짐
	char c;
	double d;
};
typedef struct Range
{
	unsigned int start;
	unsigned int end;
} range;//세미콜론 필수

int addition(struct Range k){
	return k.start + k.end;
}

int main(){
	//struct Range k = { 5, 10 };
	range k = { 5, 10 };//위 주석과 완전히 같은 뜻
	struct Range l[100] = {
		{5,10},
		{7,14},
		{10,20}
	};
	//enum days day;
	Days day;//위 주석과 같음

	printf("start: %d\n", k.start);
	printf("end  : %d\n", k.end);
	
	return 0;
}
*/

//Graph
//인접행렬(Adjacency matrix)

//shortest path(BFS)
//Breadth - First - Search

/*
typedef struct Queue{
	int Queue;
	int cnt;
}queue;
queue q[100] = { 0 };


typedef struct edge{
	int v1;
	int v2;
}edge;
edge e[100] = { 0 };

int Visited[100];//Hash

int p;
int qidx = 1;
int idx = 1;
int from, to;

int Add_edge(int From, int to);
int BFS(int From, int to);
void enqueue();

int main(){
	int i, j;
	int V, E;//Vertex 개수, Edge 개수

	q[0].Queue = from;
	q[0].cnt = 0;

	scanf("%d %d", &from, &to);
	scanf("%d %d", &V, &E);
	for (i = 1; i < 11; i++){
		scanf("%d %d", &e[i].v1, &e[i].v2);
	}

	
}

int BFS(int From, int to){

}

void enqueue(){
	p = e[idx].v1;
	while (p = e[idx].v1){
		if (e[idx].v2 = from){
			q[qidx].Queue = e[idx].v1;
			q[qidx].cnt = 
		}
		idx++;
	}
}
*/

//백준 10159

typedef struct M{
	int a;
	int b;
}M;

typedef struct C{
	int f;
	int s;
}C;

int main(){
	int n;
	int m;
	int i;
	int cnt = 0;
	int count = 0;

	int idx = 0;
	int A, B;
	int check[100] = { 0 };

	M arr[2001] = { 0 };

	scanf("%d", &n);
	scanf("%d", &m);

	for (i = 0; i < m; i++){
		scanf("%d %d", &arr[i].a, &arr[i].b);
	}

	while (1){
		while (1){
			cnt += 2;

			if (idx > m){
				break;
			}
			if (arr[idx].b != arr[idx + 1].a){
				for (i = 1; i < idx; i++){
					check[i] = cnt;
				}
				idx++;
				break;
			}
			idx++;
		}
		if (idx > m){
			break;
		}
	}

	for (i = 0; i < m; i++){
		printf("%d\n", n - check[i]);
	}
}

/*
	//선생님이 짜신 코드

#include <stdio.h>
#define N 101
 
int adj[N][N];
int path[N][N];
int queue[N];
int head=0, tail=0;
 
int safe_increment(const unsigned int n){
  return (n + 1) % N;
}
 
void enqueue(const unsigned int n){
  queue[head] = n;
  head = safe_increment(head);
}
 
int dequeue(){
  int ret = queue[tail];
  tail = safe_increment(tail);
  return ret;
}
 
void add_edge(const unsigned int from, const unsigned int to){
  adj[from][to] = 1;
}
 
int has_path(const unsigned int src, const unsigned int dest, const unsigned int things){
  int visited[N] = {0,};
  head = 0; tail = 0;
 
  enqueue(src);
 
  while(head != tail){
    int i;
    int current = dequeue();
    if(current == dest)
      return 1;
    visited[current] = 1;
    for(i = 1; i < things; ++i){
      if(adj[current][i] == 1 && visited[i] == 0){
        enqueue(i);
      }
    }
  }
  return 0;
}
 
int main(){
  unsigned int things, n, i, j;
 
  scanf("%d %d", &things, &n);
 
  for(i = 0; i < n; i++){
    int a, b;
    scanf("%d %d", &a, &b);
    add_edge(a, b);
  }
 
  for(i = 1; i <= things; ++i){
    for(j = 1; j <= things; ++j){
      if(has_path(i, j, things)){
        path[i][j] = 1;
        path[j][i] = 1;
      }
    }
  }
 
  for(i = 1; i <= things; ++i){
    int ret = 0;
    for(j = 1; j <= things; ++j){
      if(path[i][j])
        ++ret;
    }
    printf("%d\n", things - ret);
  }
 
 
  return 0;
}
*/