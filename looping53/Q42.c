// print all prime number between 1 to 100

#include <stdio.h>

int main() {
    
    int val,i,range=2;
    printf("enter value : ");
    scanf("%d",&val);

    for(range=2;range<=100;range++)
    {
        val=range;
        i=2;
    for(i=2;i<val;i++)
    {
        if(val % i == 0)
        {
            break;
        }
    }
}
    if(i==val)
    {
        printf("%d",i);
    }
    return 0;
}
