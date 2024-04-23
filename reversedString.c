#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];
    char reverse[MAX_SIZE];
    int i, len;

    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);

    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    len = strlen(str);

    for (i = 0; i < len; i++) {
        reverse[i] = str[len - 1 - i];
    }
    reverse[i] = '\0'; 

    printf("\nOriginal string: %s\n", str);
    printf("Reversed string: %s\n", reverse);

    return 0;
}
