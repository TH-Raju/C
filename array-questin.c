#include <stdio.h>

int main() {
    int marks[10]; 
    float sum = 0, average;


    printf("Enter the marks of 10 students:\n");
    for (int i = 0; i < 10; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i]; 
    }

    average = sum / 10;


    printf("Average marks of 10 students: %.2f\n", average);

    return 0;
}
