// q-4

#include <stdio.h>

int main() 
{
    int Year1,Year2;


    printf("Enter the starting year: ");
    scanf("%d", &Year1);
    printf("Enter the ending year: ");
    scanf("%d", &Year2);
    printf("Leap years between %d and %d are:\n", Year1, Year2);

    int year = Year1;
    while (year <= Year2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d\n", year);
        }
        year++;
    }

    return 0;
}
