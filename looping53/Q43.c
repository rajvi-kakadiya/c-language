// sum of all prime number between 1 to 100

// print all prime number between 1 to 100

#include <stdio.h>

int main() {
    int i, j, isPrime,sum=0;

    printf("Prime numbers between 1 and 100 are:\n");

    for(i = 2; i <= 100; i++) {
        isPrime = 1; // Assume number is prime
        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                isPrime = 0; // Not prime
                break;
            }
        }
        if(isPrime == 1) {
            sum=sum+i;
            printf("%d ", sum);
        }
    }

    printf("\n");
    return 0;
}
