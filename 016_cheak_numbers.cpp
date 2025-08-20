#include <stdio.h>

int main() {
    int num;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check condition
    if (num > 0) {
        printf("The number is Positive.\n");
    }
    else if (num < 0) {
        printf("The number is Negative.\n");
    }
    else {
        printf("The number is Zero.\n");
    }

    return 0;
}
