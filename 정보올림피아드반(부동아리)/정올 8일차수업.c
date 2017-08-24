#include <stdio.h>

//회전초밥
//https://www.acmicpc.net/problem/2531

/*
int dish[30001];
int dish_[30001];
int check[3001];
int n, d, k, c;

int cnt;
int max;
int head_idx;
int tail_idx;

void enqueue();
void dequeue();
void C();

int main(){
	int i;
	

	scanf("%d %d %d %d", &n, &d, &k, &c);

	head_idx = k;

	for (i = 0; i < n; i++){
		scanf("%d", &dish[i]);
	}

	for (i = 0; i < k; i++){
		dish_[i] = dish[i];
	}

	C();

	for (i = 0; i < d; i++){
		if (check[i] > 0){
			cnt++;
		}
	}

	while (1){
		
		max = (cnt > max) ? cnt : max;

		if (head_idx == n){
			break;
		}

		enqueue();
		dequeue();
	}

	printf("%d", max);

	return 0;
}

void C(){
	int i;
	for (i = tail_idx; i < head_idx; i++){
		check[dish_[i]]++;
	}
}

void enqueue(){
	int ch = 0;
	dish_[++head_idx] = dish[head_idx];
	check[dish_[head_idx]]++;
	if (check[dish_[head_idx]] == 1)
		cnt++;
}

void dequeue(){
	check[dish_[tail_idx]]--;
	if (!check[dish_[tail_idx]]){
		cnt--;
	}
	tail_idx++;
}
*/

//선생님 풀이
/*
#include <stdio.h>

#define MAX_DISH 3000001
#define MAX_FISH 3001

int dishes[MAX_DISH];
int hash[MAX_FISH];

int head_idx = 0, tail_idx = 0;

int safe_increment(const unsigned int index, const unsigned int dish){
	//dishes에 필요한 인덱스가 범위를 넘어가지 않도록 한다
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
	int i, max = 1; //1은 최초에 쿠폰으로 1개 먹기 때문
	int enq = 0;

	scanf("%d %d %d %d", &n_dish, &n_fish, &k, &coupon);

	for (i = 0; i < n_dish; ++i){
		scanf("%d", &dishes[i]);
	}

	hash[coupon]++;

	for (i = 0; i < k; ++i){
		enq = enqueue(max, n_dish);
		max = (enq > max) ? enq : max;
	}

	for (i = 0; i < n_dish - 1; ++i){
		int j;
		enq = enqueue(dequeue(enq, n_dish), n_dish);

		max = (enq > max) ? enq : max;
	}

	printf("%d", max);

}
*/

/*Longest increasing subsequence (LIS)알고리즘*/

//Binary Search


int arr[100];
int temp[100];
int result;
int f, l, m;
int idx;
int cnt = 0;

int LIS_length();
int binary_search();
int ASDF();

int main(){
	int i;

	for (i = 0; i < 10; i++){
		scanf("%d", &arr[i]);
	}
	temp[0] = arr[0];

	printf("%d", LIS_length());

	return 0;
}

int binary_search(){
	int n = arr[idx];
	int check = 0;

	l = idx - 1;

	while (1){
		m = (f + l) / 2;
		if (temp[m] == n){
			result = m;
			break;
		}
		else if (n > temp[m]){
			m++;
			f = m;
		}
		else if (n < temp[m]){
			m--;
			l = m;
		}
		if (f == m){
			break;
		}
		else if (l == m){
			break;
		}
	}

	if (result){
		return result;
	}
	else
		return 0;
}

int LIS_length(){
	idx++;
	if (temp[idx - 1] < arr[idx]){
		temp[idx] = arr[idx];
	}
	else if (temp[idx - 1] > arr[idx]){
		binary_search();
		idx--;
	}
}
//미완


//백준 2532 먹이사슬
//https://www.acmicpc.net/problem/2532

int main(){

}

/*
	//쌤이 짜신 먹이사슬 코드

#include <stdio.h>
 
#define N 500000
 
struct Range{
  int num;
  int start;
  int end;
};
 
struct Range arr[N];
struct Range temp[N];
 
int compare(const void *a, const void *b){
  return ((struct Range*)a)->start - ((struct Range*)b)->start;
}
 
unsigned int binary_search_inverse(struct Range *arr, const unsigned int size, const unsigned int low, const unsigned int high, const int n){
  int mid = (low + high + 1) / 2;
  if(arr[mid].end == n)
    return mid;
  else if(low == high)
    return low;
  else if(arr[mid].end < n)
    binary_search_inverse(arr, size, low, mid-1, n);
  else //(arr[mid].end > n)
    binary_search_inverse(arr, size, mid+1, high, n);
}
 
unsigned int lds(struct Range *arr, const unsigned int size){
  int i;
  int temp_size = 1;
 
  temp[0] = arr[0];
 
  for(i = 1; i < size; ++i){
    if(arr[i].end <= temp[temp_size-1].end){
      temp[temp_size] = arr[i];
      ++temp_size;
    }else{
      int replace_idx =
        binary_search_inverse(temp, temp_size, 0, temp_size-1, arr[i].end);
      temp[replace_idx] = arr[i];
    }
  }
  return temp_size;
}
 
int make_unique(struct Range *arr, const unsigned int size){
  int i, count = 0;
  struct Range temp = arr[0];
  for(i = 1; i < size; ++i){
    if(temp.start == arr[i].start && temp.end == arr[i].end)
      arr[i].num = 0;
    else
      temp = arr[i];
  }
 
  for(i = 0; i < size; ++i){
    if(arr[i].num == 0)
      count++;
    else
      arr[i-count] = arr[i];
  }
 
  return size - count;
}
 
int main(){
  int i, n;
 
  scanf("%d", &n);
 
  for(i = 0; i < n; ++i)
    scanf("%d %d %d", &arr[i].num, &arr[i].start, &arr[i].end);
 
  qsort(arr, n, sizeof(struct Range), compare);
  n = make_unique(arr, n);
 
  printf("%d", lds(arr, n));
 
  return 0;
}
*/