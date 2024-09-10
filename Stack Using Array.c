#include <stdio.h>
#include <stdlib.h> // For system("cls")
#define MAX 100       // Define the maximum size of the stack

// Global stack variables
int stack[MAX];
int top = -1; // Initially, the stack is empty

// Function to push an element to the stack
void push() {
    int value;
    if (top == MAX - 1) { // Check if stack is full
        printf("Stack Overflow! Cannot push more elements.\n");
    } else {
        printf("Enter value to push: ");
        scanf("%d", &value);
        top++;
        stack[top] = value;
        printf("%d pushed to the stack.\n", value);
    }
}

// Function to pop an element from the stack
void pop() {
    if (top == -1) { // Check if stack is empty
        printf("Stack Underflow! No elements to pop.\n");
    } else {
        printf("Popped element: %d\n", stack[top]);
        top--;
    }
}

// Function to peek at the top element of the stack
void peek() {
    if (top == -1) { // Check if stack is empty
        printf("Stack is empty.\n");
    } else {
        printf("Top element: %d\n", stack[top]);
    }
}

// Function to display the elements of the stack
void display() {
    if (top == -1) { // Check if stack is empty
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice;

    // Using do-while loop to continuously prompt the user for actions
    do {
        system("cls"); // Clear the screen at the beginning of every iteration
        printf("\n*** Stack Menu ***\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display Stack\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Switch case to handle the user's choice
        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
        
        // Pause to allow the user to see the result before clearing the screen
        if (choice != 5) {
            printf("\nPress Enter to continue...");
            getchar(); // This is to consume the newline character
            getchar(); // Wait for Enter key press
        }

    } while (choice != 5); // Loop until the user chooses to exit

    return 0;
}
