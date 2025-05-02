//write a program character is alphabet or not

#include<stdio.h>
int main()
{
    char ch;

    printf("enter character =");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    {
        printf("character is alphabets");
    }else{
        printf("character is not alphabets");
    }
}