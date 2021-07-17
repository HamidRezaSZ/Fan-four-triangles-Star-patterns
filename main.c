#include <stdio.h>

int main() {
    int n, i, k;
    printf("Enter number of sides:\n");
    scanf("%d", &n);
    printf("\n");
    printf("*");
    for (i = 1; i <= 2 * n - 1; i++) {
        printf(" ");
    }
    for (i = 1; i <= n; i++) {
        printf("* ");
    }
    printf(" ");
    printf("\n");
    for (i = 1; i <= n - 2; i++) {
        printf("*");
        for (k = 1; k <= 2 * i - 1; k++) {
            printf(" ");
        }
        printf("*");
        for (k = 1; k <= (-2 * i) + (2 * n - 1); k++) {
            printf(" ");
        }
        printf("*");
        for (k = 1; k <= (-2 * i) + (2 * n - 3); k++) {
            printf(" ");
        }
        printf("*\n");
    }
    for (i = 1; i <= n + 1; i++) {
        printf("* ");
    }
    printf(" \n");
    for (i = 1; i <= 2 * n - 2; i++) {
        printf(" ");
    }
    for (i = 1; i <= n + 1; i++) {
        printf("* ");
    }
    printf(" \n");
    for (i = 1; i <= n - 2; i++) {
        for (k = 1; k <= (-2 * i) + (2 * n - 2); k++) {
            printf(" ");
        }
        printf("*");
        for (k = 1; k <= (2 * i - 1); k++) {
            printf(" ");
        }
        printf("*");
        for (k = 1; k <= (2 * i + 1); k++) {
            printf(" ");
        }
        printf("*");
        for (k = 1; k <= (-2 * i) + (2 * n - 3); k++) {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for (i = 1; i <= n; i++) {
        printf("* ");
    }
    for (i = 1; i < 2 * n - 1; i++) {
        printf(" ");
    }
    printf("*\n");
    printf("\n");
    printf("Press 'Enter' to exit\n");
    scanf("%2c");
}