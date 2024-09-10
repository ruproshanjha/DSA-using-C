Here is a comprehensive `README.md` that includes sections on **Theory**, **Code**, **Compilation**, **Output**, and other relevant details:

```md
# Stack Implementation in C Using Array

## Theory

A **stack** is a linear data structure that follows the **Last In First Out (LIFO)** principle. This means that the last element added to the stack will be the first one to be removed. Stacks have two primary operations:

- **Push**: Add an element to the top of the stack.
- **Pop**: Remove the top element from the stack.

Additionally, there are secondary operations:
- **Peek**: View the top element without removing it.
- **Display**: Show all elements currently in the stack.

### Real-Life Examples of a Stack:
- **Pancake stack**: The last pancake placed on the stack is the first one to be removed.
- **Undo/Redo functionality**: In text editors, the last action performed can be undone first.

### Stack in Computer Science:
Stacks are widely used in algorithms, particularly in recursive algorithms, expression evaluation, and depth-first search.

## Program Overview

This C program implements a stack using a global array of fixed size (`MAX = 5`). The user can interact with the stack via a menu system, performing the operations `push`, `pop`, `peek`, and `display`. The screen is cleared after each operation for a cleaner user experience using the `system("cls")` command.

## Code

```c
#include <stdio.h>
#include <stdlib.h> // For system("cls")
#define MAX 5       // Define the maximum size of the stack

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
```

## Compilation Instructions

To compile and run the program, follow these steps:

1. Open a terminal or command prompt.
2. Navigate to the directory where your C file is located.
3. Compile the program using the following command:
   ```bash
   gcc stack_program.c -o stack_program
   ```
4. Run the program using:
   ```bash
   ./stack_program
   ```

## Example Output

```plaintext
*** Stack Menu ***
1. Push
2. Pop
3. Peek
4. Display Stack
5. Exit
Enter your choice: 1
Enter value to push: 10
10 pushed to the stack.

Press Enter to continue...

*** Stack Menu ***
1. Push
2. Pop
3. Peek
4. Display Stack
5. Exit
Enter your choice: 4
Stack elements: 10 

Press Enter to continue...
```

## Expected Behavior

- **Push**: Adds the user-specified value to the top of the stack.
  - If the stack is full, an overflow message will be displayed.
- **Pop**: Removes and displays the top value from the stack.
  - If the stack is empty, an underflow message will be displayed.
- **Peek**: Displays the top value without modifying the stack.
- **Display**: Shows all elements in the stack from bottom to top.
  - If the stack is empty, an appropriate message will be shown.
- **Exit**: Exits the program.

## Limitations

- **Fixed Size**: The stack has a fixed size of 5 elements (`MAX = 5`). This limitation can be removed by implementing a dynamic stack using pointers.
- **System Compatibility**: The use of `system("cls")` clears the screen, which is specific to Windows. For Linux or Mac, replace it with `system("clear")`.

## Real-Life Applications of Stack

- **Function Call Management**: Stacks are used in programming languages for function calls and managing return addresses.
- **Undo Mechanism**: Many applications, like text editors, use stacks to implement the undo/redo functionality.
- **Expression Parsing**: Stacks are used in compilers and interpreters to evaluate expressions (e.g., converting infix to postfix).

## Conclusion

This project demonstrates how a stack data structure works using an array in C. The program allows users to push, pop, peek, and display elements in the stack while maintaining a clean user interface with clear instructions and formatted output.

Feel free to modify the stack size or enhance the program to add more features like dynamic memory allocation.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
```

### Key Sections Explained:
1. **Theory**: Provides an introduction to stack operations and real-life examples of stacks.
2. **Code**: Includes the actual code for the stack implementation.
3. **Compilation Instructions**: Explains how to compile and run the program.
4. **Example Output**: Shows sample interaction between the user and the program.
5. **Expected Behavior**: Describes the operations performed by the program.
6. **Limitations**: Highlights some limitations of the current implementation.
7. **Real-Life Applications**: Lists practical uses of stacks in computing.
8. **Conclusion**: Summarizes the project and encourages modifications.
9. **License**: A placeholder for licensing details.

This `README.md` provides all necessary information for someone to understand, compile, and run the program.
