#include <stdio.h>
int main() {
    int size = 5;
    int array1[size], array2[size], sumArray[size];
    int i;

    printf("Enter elements of the first array:\n");
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    printf("\nEnter elements of the second array:\n");
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array2[i]);
    }

    for (i = 0; i < size; i++) {
        sumArray[i] = array1[i] + array2[i];
    }

    printf("\nThe sum of the two arrays:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", sumArray[i]);
    }
    printf("\n");
    return 0;
}
