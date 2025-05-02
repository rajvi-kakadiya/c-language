// switch case

#include<stdio.h>
int main()
{
    int ch;
    printf("press 1 speak english language\n");
    printf("press 1 speak gujrati language\n");
    printf("press 1 speak hindi language\n");

    scanf("%d",&ch);
    switch(ch){
        case 1:
        printf("english language");
        break;

        case 2:
        printf("gujarti language");
        break;

        case 3:
        printf("hindi language");
        break;

        default:
        printf("invalid choice");
    }

}