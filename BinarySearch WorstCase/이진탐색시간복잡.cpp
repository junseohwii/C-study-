#include <stdio.h>

int BSerch(int ar[], int len, int target) {
	int first = 0;
	int last = len - 1;
	int mid;
	int opCount = 0;

	while (first <= last) { //반복문이 돌아가는 동안 정한 첫번째인덱스번호가 마지막인덱스번호보다 같거나 커지면 종료한다
		mid = (first + last) / 2; // 중간에 위치한 인덱스번호

		if (target == ar[mid]) { //찾으려는 값이 mid(중앙인덱스)에 있다면 mid리턴하기
			return mid;
		}
		else {  //아니면
			if (target < ar[mid]) // 중앙값보다 작은곳에 있다면
				last = mid - 1; //중앙인덱스의 앞을 마지막 인덱스로 정하기
			else // 중앙값보다 큰 곳에 있다면
				first = mid + 1; //중앙인덱스의 뒤를 첫번째 인덱스로 정하기
		}
		opCount += 1;
	}
	printf("연산횟수: %d\n", opCount);
	return -1;
}

int main(void) {
	int arr1[500] = { 0, };
	int arr2[5000] = { 0, };
	int arr3[50000] = { 0, };
	int idx;

	idx = BSerch(arr1, sizeof(arr1) / sizeof(int), 9);
	if (idx == -1)
		printf("탐색 실패\n");
	else
		printf("타켓 저장 인덱스: %d \n", idx);

	idx = BSerch(arr2, sizeof(arr2) / sizeof(int), 4);
	if (idx == -1)
		printf("타깃 탐색 실패\n");
	else
		printf("타깃 저장 인덱스: %d \n", idx);

	idx = BSerch(arr3, sizeof(arr3) / sizeof(int), 4);
	if (idx == -1)
		printf("타깃 탐색 실패\n");
	else
		printf("타깃 저장 인덱스: %d \n", idx);
	return 0;
}