// array333333333333

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the size of the arrays: ");
    scanf("%d", &n);

    int a[n], b[n], sum[n];

    printf("Enter elements of first array:\n");
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter elements of second array:\n");
    for (i = 0; i < n; i++) {
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }

    for (i = 0; i < n; i++) {
        sum[i] = a[i] + b[i];
    }

    printf("Resulting array after addition:\n");
    for (i = 0; i < n; i++) {
        printf("sum[%d] = %d\n", i, sum[i]);
    }

    return 0;
}