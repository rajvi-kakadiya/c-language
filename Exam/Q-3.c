//Write a C program that defines a function to print only odd elements from 1D array elements.

#include <stdio.h> 
void printOddElements(int arr[], int size) {
    printf("Odd elements in the array: \n");

   
    for (int i = 0; i < size; i++) {
        
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]); 
        }
    }
    printf("\n"); 
}

int main() {
    
    int my_array[] = {10, 15, 22, 30, 35, 40, 48, 51, 60, 65, 73, 88, 91};

    int array_size = sizeof(my_array) / sizeof(my_array[0]);


    printOddElements(my_array, array_size);

    return 0; 
}