#include<stdio.h>

int main() {
    int status;

    // Delete the file
    status = remove("example.txt");

    if (status == 0) {
        printf("File deleted successfully.\n");
    } else {
        printf("Unable to delete the file.\n");
    }

    return 0;
}
