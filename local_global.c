#include <stdio.h>

// Global variable (declared outside any function)
int globalVar = 10;

int main() {
    // Local variable (declared inside main function)
    int localVar = 20;

    printf("Global Variable = %d\n", globalVar);
    printf("Local Variable  = %d\n", localVar);

    // Changing values
    globalVar = globalVar + 5;  // modifies global variable
    localVar = localVar + 5;    // modifies local variable

    printf("\nAfter modification:\n");
    printf("Global Variable = %d\n", globalVar);
    printf("Local Variable  = %d\n", localVar);

    return 0;
}
