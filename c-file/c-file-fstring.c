#include<stdio.h>

int main() {
    FILE *filePointer;
    char strings[5][20];

    // Open file in write mode
    filePointer = fopen("strings.txt", "w");

    // Get strings from the user
    printf("Enter 5 strings:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%s", strings[i]);
    }

    // Write strings to the file
    for (int i = 0; i < 5; i++) {
        fprintf(filePointer,"%s\n", strings[i]);
    }

    // Close the file
    fclose(filePointer);

    return 0;
}
