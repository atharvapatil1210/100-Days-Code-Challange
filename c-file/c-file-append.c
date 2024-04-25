#include<stdio.h>

int main() {
    FILE *filePointer;

    // Open file in append mode
    filePointer = fopen("example.txt", "a");

    // Write data to the file
    fprintf(filePointer, "Appending new text.\n");

    // Close the file
    fclose(filePointer);

    return 0;
}
