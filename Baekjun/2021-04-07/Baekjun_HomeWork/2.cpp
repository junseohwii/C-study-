/*#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b) printf(">");
    else if (a < b) printf("<");
    else printf("==");
}*/
/*
#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if (90 <= a && a <= 100) printf("A");
    else if (80 <= a && a <= 89) printf("B");
    else if (70 <= a && a <= 79) printf("C");
    else if (60 <= a && a <= 69) printf("D");
    else printf("F");
}*/
/*
#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0) printf("1");

    else printf("0");
}*/
/*#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    if (x > 0 && y > 0) printf("1");
    else if (x < 0 && y < 0) printf("3");
    else if (x > 0 && y < 0) printf("4");
    else printf("2");
}*/
/*
#include <stdio.h>

int main() {
    int h, m;
    scanf("%d %d", &h, &m);
    if (m < 45) {
        if(h == 0) printf("%d %d", 23, (60 + m) - 45);
        else printf("%d %d", h - 1, (60 + m) - 45);
    }
    else printf("%d %d", h, m - 45);
}*/