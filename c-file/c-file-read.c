#include<stdio.h>

int main() {
    FILE *filePointer;
    char data[100];

    // Open file in read mode
    filePointer = fopen("example.txt", "r");

    // Read data from the file
    if (filePointer == NULL) {
        printf("File does not exist or cannot be opened.\n");
    } else {
        fgets(data, 100, filePointer);
        printf("Data from file: %s", data);
        fclose(filePointer);
    }

    return 0;
}
