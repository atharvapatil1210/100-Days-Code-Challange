#include<stdio.h>

//Seeking and Reading Specific Positions in a File

int main() {
    FILE *filePointer;
    char data[20];

    // Open file in read mode
    filePointer = fopen("example.txt", "r");

    // Seek to position 5
    fseek(filePointer, 5, SEEK_SET);

    // Read 10 characters from the file
    fread(data, sizeof(char), 10, filePointer);
    data[10] = '\0';  // Null-terminate the string

    printf("Data from file (starting from position 5): %s\n", data);

    // Close the file
    fclose(filePointer);

    return 0;
}
