#include <stdio.h>

int findLength(char *ptr) {
    int length = 0;

    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    return length;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str); 

    int length = findLength(str);

    printf("Length of the string: %d\n", length);

    return 0;
}