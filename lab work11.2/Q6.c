
//pat666666

#include <stdio.h>

int main() {
    int i, j, n = 5;

    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            printf(" "); 
        }

        for (j = 5; j >= i + 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}