//pattern 6

#include <stdio.h>

int main() {
    int i, j, sp;

    for (i = 1; i <= 5; i++) 
    {
        for (j = 1; j <= i; j++) 
        {
            printf("%d ", j);
        }

        for (sp = 1; sp <= 2 * (5 - i); sp++) 
        {
            printf("  ");
        }

        for (j = i; j >= 1; j--) 
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}