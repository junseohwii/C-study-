#include <stdio.h>

int BSerch(int ar[], int len, int target) {
	int first = 0;
	int last = len - 1;
	int mid;
	int opCount = 0;

	while (first <= last) { //�ݺ����� ���ư��� ���� ���� ù��°�ε�����ȣ�� �������ε�����ȣ���� ���ų� Ŀ���� �����Ѵ�
		mid = (first + last) / 2; // �߰��� ��ġ�� �ε�����ȣ

		if (target == ar[mid]) { //ã������ ���� mid(�߾��ε���)�� �ִٸ� mid�����ϱ�
			return mid;
		}
		else {  //�ƴϸ�
			if (target < ar[mid]) // �߾Ӱ����� �������� �ִٸ�
				last = mid - 1; //�߾��ε����� ���� ������ �ε����� ���ϱ�
			else // �߾Ӱ����� ū ���� �ִٸ�
				first = mid + 1; //�߾��ε����� �ڸ� ù��° �ε����� ���ϱ�
		}
		opCount += 1;
	}
	printf("����Ƚ��: %d\n", opCount);
	return -1;
}

int main(void) {
	int arr1[500] = { 0, };
	int arr2[5000] = { 0, };
	int arr3[50000] = { 0, };
	int idx;

	idx = BSerch(arr1, sizeof(arr1) / sizeof(int), 9);
	if (idx == -1)
		printf("Ž�� ����\n");
	else
		printf("Ÿ�� ���� �ε���: %d \n", idx);

	idx = BSerch(arr2, sizeof(arr2) / sizeof(int), 4);
	if (idx == -1)
		printf("Ÿ�� Ž�� ����\n");
	else
		printf("Ÿ�� ���� �ε���: %d \n", idx);

	idx = BSerch(arr3, sizeof(arr3) / sizeof(int), 4);
	if (idx == -1)
		printf("Ÿ�� Ž�� ����\n");
	else
		printf("Ÿ�� ���� �ε���: %d \n", idx);
	return 0;
}