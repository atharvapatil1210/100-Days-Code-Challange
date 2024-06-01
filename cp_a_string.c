#include <stdio.h>
#include <string.h>
int main() {
    char str[100], reversedStr[100];
    printf("Enter a string: ");
    gets(str);
    strcpy(reversedStr, str);
    strrev(reversedStr);
    if (strcmp(str, reversedStr) == 0)
        printf("%s is a palindrome.\n", str);
    else
        printf("%s is not a palindrome.\n", str);
    return 0;
}