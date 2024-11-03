#include <stdio.h>
float add(float *num1, float *num2) {
    return *num1 + *num2;
}

int main() {
    float num1, num2;
    
    printf("Enter first floating-point number: ");
    scanf("%f", &num1);
    
    printf("Enter second floating-point number: ");
    scanf("%f", &num2);
    
    float result = add(&num1, &num2);
    printf("Sum of %f and %f is: %f\n", num1, num2, result);
    
    return 0;
}
