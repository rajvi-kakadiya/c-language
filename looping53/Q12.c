// sum of odd and even number from 1 to 20

#include<stdio.h>
int main()
{
    int i,oddsum=0,evensum=0;

    for(i=1;i<=20;i++)
    {
        if(i % 2==0)
        {
            evensum += i;
        }else
        {
            oddsum += i;
        }
       
    }
    printf("sum of odd number %d\n",evensum);
    printf("sum of even number %d\n",oddsum);

    return 0;
}