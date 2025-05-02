// write a program to count total number of notes in entered amount

#include<stdio.h>
int main()
{
    int amount,notes;

    printf("enter amount =");
    scanf("%d",&amount);
    
    if(amount>=500)
    {
        notes=amount/500;
        printf("500 - %d",notes);
        amount=amount-(notes*500);
    }
    if(amount>=200)
    {
        notes=amount/200;
        printf("200 - %d",notes);
        amount=amount-(notes*200);
    }
    if(amount>=100)
    {
        notes=amount/100;
        printf("100 - %d",notes);
        amount=amount-(notes*100);
    }
    if(amount>=50)
    {
        notes=amount/50;
        printf("50 - %d",notes);
        amount=amount-(notes*50);
    }
    if(amount>=20)
    {
        notes=amount/20;
        printf("20 -%d",notes);
        amount=amount-(notes*20);
    }
    if(amount>=10)
    {
        notes=amount/10;
        printf("10 - %d",notes);
        amount=amount-(notes*10);
    }
    if(amount>=5)
    {
        notes=amount/5;
        printf(" - %d",notes);
        amount=amount-(notes*5);
    }
    if(amount>=2)
    {
        notes=amount/2;
        printf("2 - %d",notes);
        amount=amount-(notes*2);
    }
    if(amount>=1)
    {
        notes=amount/1;
        printf("1 - %d",notes);
        amount=amount-(notes*1);
    }
    else
    {
        printf("invalid");
    }
    
    return 0;
    
    
}