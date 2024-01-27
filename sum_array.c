#include <stdio.h>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int sum = 0;

    // Calculate the sum of elements in the array
    for (int i = 0; i < size; ++i) {
        sum += numbers[i];
    }

    // Display the sum
    printf("Sum of array elements: %d\n", sum);

    return 0;
}
