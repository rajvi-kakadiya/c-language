//Accept kiloliters and convert them into milliliters.

#include<stdio.h>
int main()
{
    int kiloliters,milliliters;

    printf("enter kiloliters =");
    scanf("%d",&kiloliters);

    milliliters=kiloliters*1000;
    printf("%d",milliliters);
    return 0;
}