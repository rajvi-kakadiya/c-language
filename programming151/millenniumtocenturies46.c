//Accept a millennium and convert it into centuries.

#include<stdio.h>
int main()
{
    int millennium,centuries;

    printf("enter millennium =");
    scanf("%d",&millennium);

    centuries=millennium*10;
    printf("%d",centuries);
    return 0;

}