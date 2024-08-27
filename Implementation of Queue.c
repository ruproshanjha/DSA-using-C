#include <stdio.h>
#include <stdlib.h>

#define MAX 100  // Maximum size of the queue

int queue[MAX]; // Array to store the queue elements
int front = -1; // Index of the front element
int rear = -1;  // Index of the rear element

// Function to enqueue an element
void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("\nQueue is full! Cannot enqueue.\n");
    } else {
        if (front == -1) {
            front = 0; // Set front to 0 if the queue was empty
        }
        rear++;
        queue[rear] = value;
        printf("\n%d enqueued to the queue.\n", value);
    }
}

// Function to dequeue an element
int dequeue() {
    if (front == -1 || front > rear) {
        printf("\nQueue is empty! Cannot dequeue.\n");
        return -1;
    } else {
        int item = queue[front];
        front++;
        if (front > rear) {
            front = rear = -1; // Reset queue if it's now empty
        }
        printf("\n%d dequeued from the queue.\n", item);
        return item;
    }
}

// Function to display the elements of the queue
void display() {
    if (front == -1 || front > rear) {
        printf("\nQueue is empty!\n");
    } else {
        printf("\nQueue elements are: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

// Function to peek the front element of the queue
void peekFront() {
    if (front == -1 || front > rear) {
        printf("\nQueue is empty! No front element.\n");
    } else {
        printf("\nFront element is: %d\n", queue[front]);
    }
}

// Function to peek the back element of the queue
void peekBack() {
    if (rear == -1 || front > rear) {
        printf("\nQueue is empty! No back element.\n");
    } else {
        printf("\nBack element is: %d\n", queue[rear]);
    }
}

int main() {
    int choice, value;
    
    do {
        system("cls"); // Clear the screen before displaying the menu (Windows)
        
        printf("=======================================\n");
        printf("         Queue Operations Menu         \n");
        printf("=======================================\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Peek Front\n");
        printf("5. Peek Back\n");
        printf("6. Exit\n");
        printf("=======================================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                peekFront();
                break;
            case 5:
                peekBack();
                break;
            case 6:
                printf("\nExiting...\n");
                break;
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
        
        printf("\nPress any key to continue...");
        getchar();  // To consume the newline character from previous input
        getchar();  // To wait for the user to press a key
        
    } while (choice != 6);

    return 0;
}
