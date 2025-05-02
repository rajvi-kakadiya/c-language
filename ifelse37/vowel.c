// write a program to find vowel and constans.

#include<stdio.h>
int main()
{
    char ch;

    printf("enter character=");
    scanf("%c",&ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf(" character is vowel");

    }else
    {
        printf(" character is consonanat");

    }
    return 0;
}