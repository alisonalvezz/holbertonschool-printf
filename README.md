# Printf function

This repository contains a custom implementation of printf function in C.

## Description

The 'printf' function provided in this repository tries to emulate the behavior of the standard 'printf' function.
It allows formatted output to be printed to the standard output, supporting format specifiers such as "%s" for strings, "%c" for characters, "%i" and "%d" for signed integers and "%%" for printing a single "%".

## File structure

- 'main.h': Header file that contains function prototypes and necessary includes
- 'printf.c': Contains the implementation of the 'printf' function and its supporting functions.
- 'printstring': Prints a string to the standard output.
- 'print char': Prints a single character or string depending on the format specifier.
- 'print numbers': Prints signed integers to the standard output. **Has errors handling negative numbers.**
- 'print percent': Handles printing a single "%" character to the standard output.
- 'README.md': This file, providing an overview of the project.

## Usage

To use the 'printf' function in your C program:

1. Include the 'main.h' header in your code.
2. Call the 'printf' function with the desired format string and arguments.

### Example usage:

include "main.h"

int main(void)
{
      int number = 10;
      char chr = 'B';
      char *str = "Hola, Mundo!";

printf("Number: %d, Character: %c, String: %s\n", number, chr, str);

return (0);
}

### Output:

The output of this will be:

"Number: 10, Character: B, String: Hola, Mundo!"


## Compilation

To compile the code, you can use a C compiler such as gcc:
"gcc -Wall -Werror -Wextra -pedantic *.c"
