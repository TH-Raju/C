#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];
    int i, len, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);

    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
