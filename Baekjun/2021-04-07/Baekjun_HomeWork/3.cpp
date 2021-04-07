/*#include <stdio.h>

int main() {
    int h, m;
    scanf("%d %d", &h, &m);
    if (m < 45) {
        if(h == 0) printf("%d %d", 23, (60 + m) - 45);
        else printf("%d %d", h - 1, (60 + m) - 45);
    }
    else printf("%d %d", h, m - 45);
}*/
/*
#include <stdio.h>

int main() {
    int i, n, a = 0, b = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
}*/
/*
#include <stdio.h>

int main() {
	int n, i = 0, a = 0;
	scanf("%d", &n);

	while (i <= n) {
		a = a + i;
		i++;
	}
	printf("%d", a);
}
*/
/*#include <stdio.h>

int main() {
	int n, i = 0, a = 0, b = 0;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
}*/
/*#include <stdio.h>

int main() {
	int n, i;
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		printf("%d\n",i);
	}
}*/
/*#include <stdio.h>

int main() {
	int n, i;
	scanf("%d", &n);

	for (i = n; i > 0; i--) {
		printf("%d\n",i);
	}
}*/
/*
#include <stdio.h>

int main() {
	int n, i, a, b;
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d\n", i, a + b);
	}
}*/
/*#include <stdio.h>

int main() {
	int n, i, a, b;
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
	}
}*/
/*#include <stdio.h>

int main() {
	int n, i, j;
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		for (j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
}*/
/*
#include <stdio.h>

int main() {
	int n, i, j;
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		for (j = 0; j < n - i; j++) {
			printf(" ");
		}
		for (j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
}*/
/*
#include <stdio.h>

int main() {
	int i, num = 0, cut = 0, spe;
	scanf("%d %d", &num, &cut);

	for (i = 1; i <= num; i++) {
		scanf("%d", &spe);
		if (cut > spe)
			printf("%d ", spe);
	}
}*/