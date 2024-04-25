#include<stdio.h>

struct Record {
    int id;
    float value;
};

int main() {
    FILE *filePointer;
    struct Record record = {1001, 23.45};

    // Open file in binary append mode
    filePointer = fopen("data.bin", "ab");

    // Write binary data to the file
    fwrite(&record, sizeof(struct Record), 1, filePointer);

    // Close the file
    fclose(filePointer);

    return 0;
}
