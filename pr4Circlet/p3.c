// pattern 3

#include <stdio.h>

int main()
{
    int i, j, sp;

    for (i = 5; i >= 1; i--) 
    {
       for (sp = 1; sp < i; sp++)
        {
            printf("  "); 
        }

        for (j = i; j <= 5; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}