#include<stdio.h>

// cpy content from one file to another file

int main() {
    FILE *sourceFile, *destinationFile;
    char ch;

    // Open source file in read mode
    sourceFile = fopen("source.txt", "r");

    // Open destination file in write mode
    destinationFile = fopen("destination.txt", "w");

    // Copy contents from source to destination
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
