#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//single source shortest path (Dijkstra)

//Priority Queue o(logN)
//�ּ����� �̿��� ����
/*
	//insert (heap �����󿡼�)
	1. �ǳ��� ����
	2. �θ𺸴� ������ ��ȯ
		�ƴϸ� ����
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
	1. �ּҰ��� �ӽù��ۿ� ���� 
	2. �ǵ� ��带 ������
	3. �� �ڽ� ���� �ڱ��ڽ��� �켱������ ���� ���� ��ȯ
*/

/* �Է�
���� �� �Ÿ�
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
// �� distance : 0 8 9 5 7

/*
int main(){
	int min;
	int idx;
	int distance[5];
	int from, to;//from�� ������ 0
	int precedessor[5] = { 0 };
	int visited[5] = { 0 };
	int i, j;

	scanf("%d %d", &from, &to);
	for (i = 0; i < 10; i++){
		scanf("%d %d %d", &a, &b, &d);
		drr[a][b] = d;
	}

	for (i = 0; i < 5; i++){//distance�ʱ�ȭ
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

// ���� 2472 ü����

typedef struct Adjacency_matrix{
	int finish;//����
	int dt;//�Ÿ�
}vertex;

int main(){
	int n;//���� �ĺ��� ����(edge����)
	int a, b, c;//����Ʈ ����
	int m;//������ ����
	int i, j;
	int from, to, d;
	int t;//������ ����
	int q;//���� �Ǵ� ����

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
		//���
	}

	for (i = 1; i <= n; i++){
		
	}

}
//�����ð��� �̾