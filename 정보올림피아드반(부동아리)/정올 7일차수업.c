#include <stdio.h>

// Fenwick tree (binary indexed tree)
//*�κ���
//(i & (-i))
//3 2 5 7 10 3 2 7

/*
int arr[100];
int tree[100];
int n;


void Tree();
int sum();

int main(){
	int i;
	int a, b;
	
	scanf("%d", &n);

	for (i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	Tree();

	for (i = 1; i <= n; i++){
		printf("%d",tree[i]);
	}

	scanf("%d", &a);
	scanf("%d", &b);

	printf("%d ", sum(b));
	printf("%d ", sum(a));
	printf("%d ", sum(b) - sum(a-1));

}

void Tree(){
	int i;
	int num;

	for (i = 0; i < n; i++){
		num = i + 1;
		while (num <= n){
			tree[num] += arr[i];
			num += (num & -num);
		}
	}

}

int sum(int idx){
	int s = 0;

	if (idx == 0){
		return 0;
	}

	while (idx > 0){
		s += tree[idx];
		idx -= (idx & -idx);
	}

	return s;
}
*/

//���� ���� 7578
//https://www.acmicpc.net/problem/7578

/*
int A[500005];//���� ��� ��ġ
int B[500005];//�ٲ� ��� ��ġ
int C[500005];//���� ��谡 �ٲ� ����� ���°�� ��ġ�ϴ���
int D[500005];
int tree[500005];//D�迭�� Ftree

int hash[500005];//C�迭 ���Ҷ� ��

int n;

void Tree();
int sum(int idx);
void location();//C����°�

int main(){
	int i;
	long long int result = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++){
		scanf("%d", &A[i]);
	}

	for (i = 0; i < n; i++){
		scanf("%d", &B[i]);
	}
	location();

	for (i = 0; i < n; i++){
		D[C[i]] = 1;
		result += sum(n) - sum(C[i]);
		Tree(i + 1);
	}

	printf("%lld", result);
}

void Tree(long long int idx){
	int num = idx;

	while (num <= n){
		tree[num] += 1;
		num += (num & -num);
	}
}

int sum(long long int idx){
	int s = 0;

	if (idx == 0){
		return 0;
	}

	while (idx > 0){
		s += tree[idx];
		idx -= (idx & -idx);
	}

	return s;
}

void location(){
	for (int i = 0; i < n; i++){
		hash[B[i]] = i;
	}
	for (int i = 0; i < n; i++){
		C[i] = hash[A[i]];
	}
}
*/

//ȸ���ʹ�(2531)


int hash[3000];

void en();
void de();

int main(){
	int n, d, k, c;
	int arr[30000];
	int brr[3000];
	int cnt = 0;
	int i;

	scanf("%d %d %d %d", &n, &d, &k, &c);
	for (i = 0; i < n; i++){
		scanf("%d",&arr[i]);
	}
	
	while (){
		for (i = 0; i < k; i++){
			brr[i] = arr[i + cnt];
		}
	}
}

void en(){
	
}
//ȸ���ʹ� ���� �����ð��� �̾ǰ

/* 
//���� § �ڵ�

#include <stdio.h>

#define MAX_DISH 3000001
#define MAX_FISH 3001

int dishes[MAX_DISH];
int hash[MAX_FISH];

int head_idx = 0, tail_idx = 0;

int safe_increment(const unsigned int index, const unsigned int dish){
//dishes�� �ʿ��� �ε����� ������ �Ѿ�� �ʵ��� �Ѵ�
return (index + 1) % dish;
}

int enqueue(const unsigned int current_num, const unsigned int dish){
const unsigned int ret =
(++hash[dishes[head_idx]] == 1) ? (current_num + 1) : (current_num);
head_idx = safe_increment(head_idx, dish);
return ret;
}

int dequeue(const unsigned int current_num, const unsigned int dish){
const unsigned int ret =
(--hash[dishes[tail_idx]] == 0) ? (current_num - 1) : (current_num);
tail_idx = safe_increment(tail_idx, dish);
return ret;
}

int main(){
int n_dish, n_fish, k, coupon;
int i, max = 1; //1�� ���ʿ� �������� 1�� �Ա� ����
int enq = 0;

scanf("%d %d %d %d", &n_dish, &n_fish, &k, &coupon);

for(i = 0; i < n_dish; ++i){
scanf("%d", &dishes[i]);
}

hash[coupon]++;

for(i = 0; i < k; ++i){
enq = enqueue(max, n_dish);
max = (enq > max) ? enq : max ;
}

for(i = 0; i < n_dish - 1; ++i){
int j;
enq = enqueue(dequeue(enq, n_dish), n_dish);

max = (enq > max) ? enq : max;
}

printf("%d", max);

}*/