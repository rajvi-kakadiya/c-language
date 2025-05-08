// Accept a mile and convert it into kilometers. 

#include<stdio.h>
int main()
{
    int mile,kilometer;

    printf("enter mile =");
    scanf("%d",&mile);

    kilometer=mile/1.6934;

    printf("%d",kilometer);
    return 0;
    
}