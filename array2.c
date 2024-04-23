#include <stdio.h>

int main() {
    int size, i;
    int evenCount = 0, oddCount = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("Total number of even elements: %d\n", evenCount);
    printf("Total number of odd elements: %d\n", oddCount);

    return 0;
}
