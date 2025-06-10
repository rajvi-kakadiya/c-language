//Print a below pattern using nested for loop in C language
#include <stdio.h> 

int main() {
    int rows = 5;    
    int number = 10; 

    
    for (int i = 1; i <= rows; i++) {

        
        for (int j = 1; j <= (rows - i) * 2 + 1; j++) {
            printf(" "); 
        }

    
        for (int n = number - i + 1; n <= number; n++) {
            printf("%d ", n); 
        }

        printf("\n"); 
    }

    return 0; 
}
