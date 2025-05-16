// aceept a value and reverse it 

#include<Stdio.h>
int main()
{
     int val,rev=0,reminder=0;

     printf("enter value : ");
     scanf("%d",&val);

     while(val>0)
     {
        reminder=val%10;
        rev=(rev*10)+reminder;
        val=val/10;
     }
     printf("reverse number : %d",rev);
     return 0;
}