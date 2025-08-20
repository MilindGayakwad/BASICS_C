#include <stdio.h>

int main() {
    int number;

    // Do-while loop to ensure the user enters a positive number
    do {
        printf("Enter a positive number: ");
        scanf("%d", &number);

        if (number <= 0) {
            printf("Invalid input. Please try again.\n");
        }
    } while (number <= 0);

    printf("You entered: %d\n", number);

    return 0;
}
