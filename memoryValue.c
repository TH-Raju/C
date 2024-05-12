#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50}; 
    int *ptr; 
    
    printf("Printing values and memory addresses of array elements:\n");
    for(int i = 0; i < 5; i++) {
        ptr = &arr[i]; 
        
        
        printf("Value at index %d: %d, Memory Address: %p\n", i, *ptr, ptr);
    }
    
    return 0;
}
