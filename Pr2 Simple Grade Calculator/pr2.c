// project 2

#include <stdio.h>
int main()
{
    int score;

    printf("Enter your score :-");
    scanf("%d", &score);

    
    (score>=91 && score<=100)?
    printf("your gread is A. \n Excellent work!"):
    (score>=81 && score<=90)?
    printf("your gread is B. \nExcellent work! you are eligible for the next level."):
    (score>=61 && score<=80)?
    printf("your gread is C. \nExcellent work!"):
    (score>=41 && score<=60)?
    printf("your gread is D. \nExcellent work!"):
    printf("try again next time");
    

    return 0;
}