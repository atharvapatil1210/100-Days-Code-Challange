#include<stdio.h>

void insertElement(int arr[], int *size, int pos, int element) {
	if (pos < 1 || pos > *size +1) {
		printf("Invalid position! Position should be between 1 and %d. \n", *size + 1);
		return;
	}

	for (int i = *size - 1; i >= pos - 1; i--) {
        	arr[i + 1] = arr[i]; // Shifting elements to the right
    	}

   	 arr[pos - 1] = element; // Insert element at given position
    	(*size)++; // Increase size

}

void deleteElement(int arr[], int *size, int pos) {
    if (pos < 1 || pos > *size) {
        printf("Invalid position! Position should be between 1 and %d.\n", *size);
        return;
    }

    for (int i = pos - 1; i < *size - 1; i++) {
        arr[i] = arr[i + 1]; // Shifting elements to the left
    }

    (*size)--; // Decrease size
}


void displayArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;
    int choice, pos, element;

    while (1) {
        printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter position (1 to %d) and element: ", size + 1);
                scanf("%d %d", &pos, &element);
                insertElement(arr, &size, pos, element);
                break;
            case 2:
                printf("Enter position (1 to %d) to delete: ", size);
                scanf("%d", &pos);
                deleteElement(arr, &size, pos);
                break;
            case 3:
                displayArray(arr, size);
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

