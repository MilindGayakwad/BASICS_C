#include <stdio.h>
#include <stdbool.h>
int main() {
    int choice;
    bool exit = false;

        printf("\nI want to persue my career in:\n");
        printf("1. AIML 1\n");
        printf("2. AAI 2\n");
        printf("3. XAI\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("You selected Option 1.\n");
                break;
            case 2:
                printf("You selected Option 2.\n");
                break;
            case 3:
                printf("Exiting the program.\n");
                exit = true; // Set exit to true to break the loop
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
    return 0;
}

