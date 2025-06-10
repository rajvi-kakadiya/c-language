//write a C program to find the average of all elements in a 2D array using a function.
#include <stdio.h>

float calculateAverage(int arr[][100], int rows, int cols) 
{
    int sum = 0;
    int totalElements = rows * cols;

    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }

    
    if (totalElements > 0) {
        return (float)sum / totalElements;
    } else {
        return 0.0; 
    }
}

int main() {
    int rows, cols;

    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    
    int arr[100][100];

    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    
    float average = calculateAverage(arr, rows, cols);


    printf("The average of the elements in the array is: %.2f\n", average);

    return 0;
}