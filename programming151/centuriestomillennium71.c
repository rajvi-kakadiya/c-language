// Accept centuries and convert them into a millennium. 

#include<stdio.h>
int main()
{
    int centuries,millennium;

    printf("enter centuries=");
    scanf("%d",&centuries);

    millennium=centuries/1000;

    printf("%d",millennium);
    return 0;
}