#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("Length of the string: %zu\n", strlen(str));
    return 0;
}
