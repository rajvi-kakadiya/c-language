// q4.................

#include <stdio.h>
int main()
{
    int row, col, i, j;
    printf("enter number of rows:- ");
    scanf("%d", &row);
    printf("enter number of columns:- ");
    scanf("%d", &col);

    int a[row][col], rown, coln, rows, cols;

    printf("Enter the elements of the array:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("a[%d][%d]:-", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("enter of row:- ");
    scanf("%d", &rown);
    printf("enterr of column:- ");
    scanf("%d", &coln);

    if (rown < 0 || rown >= row || coln < 0 || coln >= col)
    {
        printf("invalid input");
    }
    else
    {

        for (j = 0; j < col; j++)
        {
            rows += a[rown][j];
        }
        for (i = 0; i < row; i++)
        {
            cols += a[coln][i];
        }
        printf("elements of row %d: %d\n", rown, j);
        printf("Sum of elements in row %d: %d\n", rown, rows);

        printf("elements of row %d: %d\n", coln, i);
        printf("Sum of elements in column %d: %d\n", coln, cols);
    }
    return 0;
}