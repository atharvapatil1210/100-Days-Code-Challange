#include<stdio.h>

int main() {
    FILE *filePointer;

    // Open file in write mode
    filePointer = fopen("example.txt", "w");

    // Write data to the file
    fprintf(filePointer, "Hello, World!\n");

    // Close the file
    fclose(filePointer);

    return 0;
}
