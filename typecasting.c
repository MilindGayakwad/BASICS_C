#include <stdio.h>
int main() {
    int x = 10;
    float y = x;   // Implicit casting (int → float)
    printf("x = %d, y = %.2f\n", x, y);
    return 0;
}
