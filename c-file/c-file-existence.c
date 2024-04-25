#include<stdio.h>
#include<stdbool.h>

int main() {
    FILE *filePointer;
    bool exists = false;

    // Open file in read mode
    filePointer = fopen("example.txt", "r");

    // Check if the file exists
    if (filePointer != NULL) {
        exists = true;
        fclose(filePointer);
    }

    if (exists) {
        printf("File exists.\n");
    } else {
        printf("File does not exist.\n");
    }

    return 0;
}
