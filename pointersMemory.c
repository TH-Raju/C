#include <stdio.h>

int main() {
    int num = 10;
    
    int *ptr;
    
    ptr = &num;
    
    printf("Value of num: %d\n", num);
    printf("Memory address of num: %p\n", ptr);
    
    return 0;
}
