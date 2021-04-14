/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char a;
	scanf("%c", &a);
	printf("%d", a);
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main() {

	int arr[1000], n1, n2, i, j;
	int sum, cnt;
	double max, min;

	scanf("%d", &n1);
	for (i = 0; i < n1; i++) {
		sum = 0, cnt = 0;
		scanf("%d", &n2);
		for (j = 0; j < n2; j++) {
			scanf("%d", &arr[j]);
			sum += arr[j];
		}
		max = (double)sum / n2;
		for (j = 0; j < n2; j++) {
			if (arr[j] > max) cnt++;
		}
		min = (double)cnt / n2 * 100;
		printf("%.3f%\n", min);
	}
	return 0;
}