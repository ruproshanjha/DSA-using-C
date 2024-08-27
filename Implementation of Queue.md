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
2. **Run the Program**:
   ```bash
   ./queue
   ```
   or if you are on Windows:
   ```bash
   queue.exe
## Code Snippet
