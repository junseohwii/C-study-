/*#include <stdio.h>

int main() {
	int i, n, a, b;
	while (1) {
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0) break;
		else printf("%d\n", a + b);
	}
}*/
/*#include <stdio.h>
int main() {
	int a, b;
	while (1) {
		if (scanf("%d %d", &a, &b) == EOF) {
			break;
		}
		else {
			printf("%d\n", a + b);
		}
	}
}*/
/*
#include <stdio.h>
int main() {
	int n, a1, a2, a3, b = 0, n2, cnt = 0;
	scanf("%d", &n);
	n2 = n;
	do {
		if (n < 10) {
			a1 = 0;
			a2 = n;
		}
		else {
			a1 = n / 10;
			a2 = n % 10;
		}
		a3 = a1 + a2;
		b = (a2 * 10) + (a3 % 10);
		n = b;
		cnt = cnt + 1;
	} while (n2 != b);

	printf("%d\n", cnt);
	return 0;
}*/