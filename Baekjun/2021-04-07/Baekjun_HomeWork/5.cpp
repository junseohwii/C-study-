/*
#include<stdio.h>
int main() {
	int n, num, i;
	int max = -1000000;
	int min = 1000000;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		scanf("%d", &num);
		if (max < num) {
			max = num;
		}
		if (min > num) {
			min = num;
		}
	}
	printf("%d %d", min, max);
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int arr[10];
	int i;
	int max=0, in;
	for (i = 1; i <= 9; i++) {
		scanf("%d", &arr[i]);
	}
	for (i = 1; i <= 9; i++) {
		if (max < arr[i]) {
			max = arr[i];
			in = i;
		}
	}
	printf("%d\n%d", max, in);
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b, c;
	int n, inum, i = 1;
	int arr[10] = {0,};
	scanf("%d %d %d", &a, &b, &c);
	n = a * b * c;

	while (1 <= n) {
		inum = n % 10;
		arr[inum]++;
		n = n / 10;
	}

	for (i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int arr[42] = {0,};
	int n, i, inum, num = 0;
	for (i = 0; i < 10; i++) {
		scanf("%d", &n);
		inum = n % 42;
		arr[inum] = 1;
	}

	for (i = 0; i < 42; i++) {
		if (arr[i] == 1) {
			num++;
		}
	}
	printf("%d", num);
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int arr[1000];
	int i, j, n;
	double max = 0;
	double sum = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	for (i = 0; i < n; i++) {
		sum = sum + arr[i] / max * 100;
		
	}

	printf("%.1f", sum / n);
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char p;
	int i, j, k = 0, n;
	int sum = 0;
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		char arr[80] = { 0, };
		scanf("%s", arr);

		for (j = 0; j < sizeof(arr); j++) {
			if (arr[j] == 'O') {
				k++;
				sum = sum + k;
			}
			else {
				k = 0;
			}
		}
		printf("%d\n", sum);
		sum = 0;
	}
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int arr[1000];
	int n, n1, i, j;
	int num = 0;
	double mid = 0;
	int mam = 0;
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &n1);

		for (j = 0; j < n1; j++) {
			scanf("%d", &arr[j]);
			num = num + arr[j];
		}
		mid = num / n1;

		for (j = 0; j < n1; j++) {
			if (mid < arr[j]) {
				mam++;
			}
		}
	}

	printf("%.3f", (n1/mam)*100);

}
*/
/*
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
*/