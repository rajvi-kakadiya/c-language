// Write a C program to find even elements from an 1D array using Pointer.
#include <stdio.h> 

int main() {
    
    int arr[] = {10, 15, 22, 30, 35, 40, 48, 51, 60, 65};
    
    int n = sizeof(arr) / sizeof(arr[0]);

    
    int *ptr = arr; 

    printf("Even elements in the array: \n");

    
    for (int i = 0; i < n; i++) 
    {
        
        if (*(ptr + i) % 2 == 0) {
            
            printf("%d ", *(ptr + i));
        }
    }

    printf("\n"); 

    return 0; 
}


