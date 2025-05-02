//lowercase to uppercase

#include<stdio.h>
int main()
{
    char ch;

    printf("enter character = ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z')
    {
        ch=ch-('a'-'A');
        printf("converted uppercase");
    }
    else if(ch>='A' && ch<='a')
    {
        ch=ch+('a'-'A');
        printf("converted lowwercase");
    }
    return 0;
}