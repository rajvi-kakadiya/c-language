// pat22222222222222222

#include <stdio.h>

int main() {
    int i, j, n = 5;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" "); 
        }

        for (j = n - i + 1; j <= n; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}