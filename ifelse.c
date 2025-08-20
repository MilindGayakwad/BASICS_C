#include <stdio.h>
int main () {
    int a = 10, b = 10;
    int max;
    if (a== b) {
        printf("Both numbers are equal.\n");
        return 0; // Exit if both numbers are equal
    }
    // Using if-else to find the maximum of two numbers
    if (a > b) {
        max = a;
    } else {
        max = b;
    }

    printf("Maximum value is: %d\n", max);
    return 0;
}
