Certainly! Here's a `README.md` file for the provided C program that implements queue operations using an array.

```markdown
# Queue Implementation in C

This repository contains a simple C program that demonstrates the implementation of a queue using an array. The program provides various operations such as `enqueue`, `dequeue`, `display`, `peek front`, and `peek back` to manage the queue. The program uses a command-line interface with a menu-driven approach to allow users to interact with the queue.

## Table of Contents

- [Features](#features)
- [Program Explanation](#program-explanation)
- [Queue Operations](#queue-operations)
- [How to Run](#how-to-run)
- [Code Snippet](#code-snippet)
- [Example Output](#example-output)

## Features

- **Queue Operations**: Perform various operations like enqueue, dequeue, display, peek front, and peek back.
- **Menu-driven Interface**: The user is prompted with a menu to select the desired operation.
- **Dynamic Output Formatting**: The screen is cleared after every operation to keep the output clean and organized.
- **Error Handling**: Provides messages for queue overflow and underflow conditions.

## Program Explanation

The program uses an array to implement a queue with the following operations:

- **Enqueue**: Adds an element to the end of the queue.
- **Dequeue**: Removes an element from the front of the queue.
- **Display**: Shows all the elements in the queue from front to rear.
- **Peek Front**: Shows the element at the front of the queue without removing it.
- **Peek Back**: Shows the element at the rear of the queue without removing it.

### Key Variables

- `queue[MAX]`: An array that stores the elements of the queue.
- `front`: An integer representing the index of the front element in the queue. It is initialized to -1 to indicate that the queue is initially empty.
- `rear`: An integer representing the index of the rear element in the queue. It is also initialized to -1 for the same reason.

### Queue Operations

1. **Enqueue (Add an element to the queue)**:
   - Adds a new element at the rear end of the queue.
   - Checks if the queue is full before adding the element.
   - If not full, the element is added and the rear index is incremented.

2. **Dequeue (Remove an element from the queue)**:
   - Removes an element from the front of the queue.
   - Checks if the queue is empty before removing the element.
   - If not empty, the front index is incremented.

3. **Display**:
   - Displays all elements from the front to the rear of the queue.
   - Shows an appropriate message if the queue is empty.

4. **Peek Front**:
   - Displays the element at the front of the queue.
   - Shows an appropriate message if the queue is empty.

5. **Peek Back**:
   - Displays the element at the rear of the queue.
   - Shows an appropriate message if the queue is empty.

## How to Run

1. **Compile the program**:
   Use a C compiler like `gcc` to compile the program.
   ```bash
   gcc queue.c -o queue
   ```

2. **Run the program**:
   ```bash
   ./queue
   ```

   or if you are on Windows:
   ```bash
   queue.exe
   ```

## Code Snippet

```c
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
```

## Example Output

```
=======================================
         Queue Operations Menu         
=======================================
1. Enqueue
2. Dequeue
3. Display
4. Peek Front
5. Peek Back
6. Exit
=======================================
Enter your choice: 1

Enter value to enqueue: 10

10 enqueued to the queue.

Press any key to continue...
```

## License

This code is released under the MIT License. Feel free to use, modify, and distribute it as you see fit.

## Contributions

Contributions are welcome! If you have any suggestions or improvements, please create a pull request or open an issue.

## Author

Created by [Your Name]. Feel free to reach out with any questions or feedback!
```

You can customize the `README.md` further by adding additional sections such as "Challenges Faced," "Future Improvements," or "References," depending on your needs.
