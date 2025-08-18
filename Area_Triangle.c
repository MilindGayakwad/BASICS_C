#include <stdio.h>
int main() {
    int x = 7, y = 2;
    float result1 = (1/2)*x * y;        // Implicit (int/int = int → float)/
    float result2 = (float)(1/2)*x * y; // Explicit casting
    float result3= (1.0/2.0)*x * y;
     float result4=(x * y)*(1.0/2.0);
    printf("result1 = %f\n", result1); 
    printf("result2 = %f\n", result2); 
    printf("result3 = %f\n", result3); 
    printf("result4 = %f\n", result4); 
    return 0;
}
