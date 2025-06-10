//implement a C program to find an average and a grade of a student. Consider 5 subjects. Assign out of 100 marks for each subject. Use conditions for evaluate grades based on average value.

#include <stdio.h>

int main() 
{
    int marks[5];
    int sum = 0;
    float ave;
    char grade;


    printf("Enter marks of 5 subject :\n");
    for(int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);


        if(marks[i] < 0 || marks[i] > 100) {
            printf("Invalid input. Marks should be between 0 and 100.\n");
            return 1;
        }

        sum += marks[i];
    }

    ave = sum / 5.0;

    
    if(ave >= 90)
        grade = 'A';
    else if(ave >= 80)
        grade = 'B';
    else if(ave >= 70)
        grade = 'C';
    else if(ave >= 60)
        grade = 'D';
    else
        grade = 'F';

    
    printf("\nTotal Marks: %d\n", sum);
    printf("Average: %.2f\n", ave);
    printf("Grade: %c\n", grade);

    return 0;
}
