// patttt 88888888888

#include <stdio.h>

int main() {
    int i, j, n = 5, num, spaces;

    for (i = 0; i < n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf("%d", j);
        }

        for (j = 0; j < 2 * i; j++) {
            printf(" ");
        }

        for (j = n - i; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    for (i = n - 1; i >= 0; i--) {
        for (j = 1; j <= n - i; j++) {
            printf("%d", j);
        }

        for (j = 0; j < 2 * i; j++) {
            printf(" ");
        }

        for (j = n - i; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}