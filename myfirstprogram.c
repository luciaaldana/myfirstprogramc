#include <stdio.h>  // Preprocessor directive to include standard input output header file.
#include <stdlib.h> // Preprocessor directive to include standard library header file.

int main() // Start of the main function. Any code inside the main function will be executed.
{
  printf("\\Hello World!\\\n");               // Function to print the message inside the double quotes.
  printf("Hello Everyone!\n\n");              // Very important not to forget the semicolon at the end of the statement.
  printf("\"I am learning C programming.\""); // Statement. The programming instructions are called statements.
  return 0;                                   // Return statement. Ends the main function.
}

// Escape Sequences:

// \n - New line
// \n\n - Blank line
// \t - Horizontal tab
// \" - Double quote

// \\ - Backslash
// \v - Vertical tab
// \b - Backspace
// \r - Carriage return
// \f - Form feed
// \' - Single quote
// \? - Question mark
// \0 - Null character
// \a - Alert
// \ooo - Octal number
// \xhh - Hexadecimal number
// \u - Unicode character
// \U - Unicode character
// \x - Hexadecimal number

// Variables in C programming:

// type variable_name = value;

int num = 10;

// Data types in C programming:
// int - Integer
// char - Character
// float - Floating point number
// double - Double floating point number
// void - Special data type

// ! Can't use a printf statement to display the value of a variable.