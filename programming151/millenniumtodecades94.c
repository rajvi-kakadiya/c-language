//Accept a millennium and convert it into decades.
#include<stdio.h>
int main()
{
    int millennium,decades;
    printf("enter millennium=");
    scanf("%d",&millennium);

    decades=millennium*100;

    printf("%d",decades);
    return 0;
}