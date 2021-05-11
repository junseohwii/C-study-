#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int plus(int x, int y) {
	return (x - y);
}

int main() {
	int a, b;
	int result;
	scanf("%d %d", &a, &b);
	result = plus(a, b);
	printf("%d", result);
}