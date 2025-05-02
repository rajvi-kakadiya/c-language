// make mark sheet

#include<stdio.h>
int main()
{
    int maths,science,english,marks;
    float total;

    printf("enter maths mark = ");
    scanf("%d",&maths);
    printf("enter marks of science=");
    scanf("%d",&science);
    printf("enter marks of english=");
    scanf("%d",&english);

    marks = maths + science + english;
    total = marks/3;

    printf("avrage mark = %.2f",total);
    return 0;
}