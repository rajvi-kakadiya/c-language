// print even number using do while loop

#include <stdio.h>
int main()
{
    int i=1,number;

    printf("enter Number : ");
    scanf("%d",&number);

    do
    {
        if(i%2==0){
        printf("%d\n",i);
        }
        i++;
    }while(i<=number);
    return 0;
}