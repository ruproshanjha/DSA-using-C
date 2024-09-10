# Stack Implementation using C

This project implements a simple stack data structure in C using a global array. The program provides a menu-based interface for the user to perform basic stack operations such as `push`, `pop`, `peek`, and `display`. The interface is built using a `switch-case` structure and a `do-while` loop. The screen is cleared after every operation for a cleaner user experience using the `system("cls")` command.

## Features

- **Push**: Adds an element to the top of the stack.
- **Pop**: Removes the top element from the stack.
- **Peek**: Displays the top element without removing it.
- **Display**: Shows all the elements currently in the stack.
- **Exit**: Exits the program.

## Program Flow

1. The user is presented with a menu to choose a stack operation.
2. Based on the user input, the corresponding stack operation is performed.
3. After the operation, the screen is cleared and the menu is shown again.
4. The program continues until the user chooses to exit.

## Requirements

- C Compiler (such as GCC or Clang).
- A terminal that supports the `system("cls")` command (use `system("clear")` for Linux/MacOS).

## Compilation and Execution

To compile and run the program, follow these steps:

1. Open your terminal or command prompt.
2. Compile the program using the following command:

    ```bash
    gcc stack_program.c -o stack_program
    ```

3. Run the program:

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
