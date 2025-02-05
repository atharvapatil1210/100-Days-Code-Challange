#include <stdio.h>
#define MAX 100  // Maximum stack size 
int stack[MAX];  // Stack array
int top = -1;    // Top pointer initialized to -1

// Function to push an element into the stack
void push(int element) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = element;
    printf("%d pushed into stack\n", element);
}

// Function to pop an element from the stack
void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return;
    }
    printf("%d popped from stack\n", stack[top--]);
}

// Function to display the stack
void display() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

// Main function
int main() {
	int choice, value;
	
	while(1) {
		printf("\nStack Operations:\n");
		printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);

		switch (choice) {
			case 1:
				printf("Enter value to push");
				scanf("%d",&value);
				push(value);
				break;
			
			case 2:
                		pop();
                		break;
            		case 3:
                		display();
                		break;
            		case 4:
                		printf("Exiting program...\n");
                		return 0;
            		default:
                		printf("Invalid choice! Please try again.\n");
        }
    }
}


