#include <stdio.h>
#include <stdlib.h>

// ���� 2472 ü����
//�̿�

/*
typedef struct Edge{
	int finish;//����
	int dt;//�Ÿ�
}edge;

edge A[100001][5] = { 0 };

int main(){
	int n;//���� �ĺ��� ����(edge����)
	int a, b, c;//����Ʈ ����
	int m;//������ ����
	int i, j;
	int from = 1, to, d;
	int t;//������ ����
	int q;//���� �Ǵ� ����
	int min;
	int idx = 0;
	int drr[1000][1000];

	int temp;
	int e = 0;

	int distance[100000];
	int visited[100000] = { 0 };



	scanf("%d", &n);
	scanf("%d %d %d", &a, &b, &c);
	scanf("%d", &m);


	for (i = 1; i <= m; i++){
		e = 0;
		for (j = 0; j < 5; j++){
			if (e == 1){
				continue;
			}
			temp = from;
			scanf("%d %d %d", &from, &to, &d);
			if (temp != from){
				A[from][0].finish = to;
				A[from][0].dt = d;
				e++;
				continue;
			}
			A[from][j].finish = to;
			A[from][j].dt = d;
		}
	}

	for (i = 1; i <= m; i++){
		for (j = 0; j < 5; j++){
			printf("%d %d\n", A[i][j].finish, A[i][j].dt);
		}
	}

	scanf("%d", &t);
	for (i = 0; i < t; i++){
		scanf("%d", &q);
		//���
	}


	for (i = 0; i < 100000; i++){//distance�ʱ�ȭ
		distance[i] = 0x7FFFFFFF;
	}
	distance[0] = 0;

	for (i = 0; i < 100000; i++){
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
			}
		}
	}

	printf("%d\n", distance[to]);

	return 0;
}
*/

//���� �Ҵ�

/*
int* array_allocation(){
	int* int_ptr = (int *)malloc(50 * sizeof(int));

	return int_ptr;
}

int main(){
	int* ptr = array_allocation();
	ptr[0] = 1;
	ptr[1] = 2;

	free(ptr);//�����Ҵ� ����
	return 0;
}
*/

//�����Ҵ�

struct Node *head;
struct Node *tail;

struct Node{
	int value;
	struct Node *next;
};

void enqueue(const int n);

int main(){
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	int n;

	while (1){
		scanf("%d", &n);
		(*temp).value = n;
		(*temp).next = NULL;
		(*head).next = temp;
		
	}

	return 0;
}

void enqueue(const int n){
	
}
//�����ð��� �̾