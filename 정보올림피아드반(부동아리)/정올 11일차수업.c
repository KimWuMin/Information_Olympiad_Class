#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//single source shortest path (Dijkstra)

//Priority Queue o(logN)
//최소힙을 이용한 구현
/*
	//insert (heap 구조상에서)
	1. 맨끝에 삽입
	2. 부모보다 작으면 교환
		아니면 종료
*/

/*
typedef struct Priority_queue{
	int priority;
}P;

int drr[5][5];
int a, b, d;

void extract();
*/

/*
	1. 최소값을 임시버퍼에 저장 
	2. 맨뒤 노드를 맨위로
	3. 두 자식 노드와 자기자신중 우선순위가 높은 노드와 교환
*/

/* 입력
시작 끝 거리
0 1 10
0 3 5
1 2 1
1 3 2
3 1 3
3 2 9
3 4 2
2 4 4
4 2 6
4 0 7
*/
// 답 distance : 0 8 9 5 7

/*
int main(){
	int min;
	int idx;
	int distance[5];
	int from, to;//from은 무조건 0
	int precedessor[5] = { 0 };
	int visited[5] = { 0 };
	int i, j;

	scanf("%d %d", &from, &to);
	for (i = 0; i < 10; i++){
		scanf("%d %d %d", &a, &b, &d);
		drr[a][b] = d;
	}

	for (i = 0; i < 5; i++){//distance초기화
		distance[i] = 0x7FFFFFFF;
	}
	distance[0] = 0;

	for (i = 0; i < 5; i++){
		min = 0x7FFFFFFF;
		for (j = 0; j < 5; j++){
			if (visited[j] == 0 && min>distance[j]) {
				min = distance[j];
				idx = j;
			}
		}
		visited[idx]++;
		for (j = 0; j < 5; j++){
			if (distance[j] > drr[idx][j] + distance[idx] && drr[idx][j] != 0){
				distance[j] = drr[idx][j] + distance[idx];
				precedessor[j] = idx;
			}
		}
	}

	printf("%d\n", distance[to]);

	printf("%d", to);
	while (to != 0){
		printf(" <- %d", precedessor[to]);
		to = precedessor[to];
	}

	return 0;
}
*/

// 백준 2472 체인점

typedef struct Adjacency_matrix{
	int finish;//도착
	int dt;//거리
}vertex;

int main(){
	int n;//매장 후보지 개수(edge개수)
	int a, b, c;//아파트 단지
	int m;//도로의 개수
	int i, j;
	int from, to, d;
	int t;//질의의 개수
	int q;//질의 판단 정수

	int distance[100000];
	int visited[100000] = {0};

	vertex A[100001];

	scanf("%d",&n);
	scanf("%d %d %d", &a, &b, &c);
	scanf("%d", &m);

	for (i = 1; i <= m; i++){
		scanf("%d %d %d", &from, &to, &d);
		A[from].finish = to;
		A[from].dt = d;
	}
	scanf("%d", &t);
	for (i = 0; i < t; i++){
		scanf("%d",&q);
		//계산
	}

	for (i = 1; i <= n; i++){
		
	}

}
//다음시간에 이어서