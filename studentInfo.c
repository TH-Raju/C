#include <stdio.h>

struct student {
    char name[50];
    int roll_number;
    float marks;
};

int main() {
    struct student students[3]; 
    

    for(int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_number);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    

    printf("\nDetails of the students:\n");
    for(int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll_number);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
    
    return 0;
}
