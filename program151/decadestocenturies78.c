// Accept decades and convert them into centuries.

#include<stdio.h>
int main()
{
    int decades,centuries;

    printf("enter decades =");
    scanf("%d",&decades);

    centuries=decades/10;
    printf("%d",centuries);
    return 0;
    
}