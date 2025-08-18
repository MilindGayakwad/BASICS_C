#include <stdio.h>
int main() {
    float a = 5.75;
    int b = (int)a;   // Explicit casting (float → int)
    printf("a = %.2f, b = %d\n", a, b);
    return 0;
}
