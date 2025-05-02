// write a program character is uppercase or lowercase

#include<stdio.h>
int main()
{
    char ch;

    printf("enter character = ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z')
    {
        printf("character is lowercase");
    }else
    {
        printf("character is uppercase");
    }
    return 0;
}