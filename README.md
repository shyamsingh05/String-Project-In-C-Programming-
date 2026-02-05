# String-Project-In-C-Programming-
String-Project-in-C-Programing-
This program is written in C language.

It performs multiple string operations using functions.

Header file <stdio.h> is used for input and output functions.

<string.h> is included for string handling functions like strlen().

<conio.h> is used for getch() to take single character input.

Function prototypes are declared before main() for clarity.

inputString() is the starting function of the program.

MainMenu() displays the list of string operations.

Other functions perform specific string manipulations.

main() function calls inputString().

inputString() declares a character array input[40].

It displays a welcome message.

The user is asked to enter a string.

fgets() reads the input string safely.

sizeof(input) prevents buffer overflow.

strcspn() is used to remove the newline character.

The entered string is displayed back to the user.

The string is passed to MainMenu().

MainMenu() receives the string using a pointer.

Menu options are printed for the user.

The menu provides 7 string operations.

getch() captures the user’s choice without pressing Enter.

If choice is '1', uppercase conversion is called.

If choice is '2', lowercase conversion is called.

If choice is '3', string reversal is called.

If choice is '4', each word is reversed in its position.

If choice is '5', first letter of each word is capitalized.

If choice is '6', last letter of each word is capitalized.

If choice is '7', character occurrence is counted.

After operation, user is asked for next action.

Pressing 's' repeats operations on the same string.

Pressing 'n' allows entering a new string.

convertUpperCase() converts lowercase letters to uppercase.

ASCII value difference of 32 is used.

Loop runs until null character '\0'.

Modified string is printed.

convertLowerCase() converts uppercase letters to lowercase.

Same ASCII logic is applied.

reverseString() prints characters from end to start.

Original string remains unchanged.

firstLetterWordUpperCase() capitalizes first letter of each word.

It checks if index is zero or previous character is space.

Only lowercase letters are converted.

lastLetterWordUpperCase() capitalizes last letter of each word.

It checks if next character is space or null.

Only valid alphabet characters are modified.

countOccurance() counts frequency of each character.

Temporary array tmp stores already counted characters.

Duplicate counting is avoided.

Occurrence count is displayed for each unique character.

Nested loops are used for counting characters.

found variable tracks repeated characters.

reverseOnPosition() reverses words individually.

Temporary array temp stores characters of one word.

Characters are reversed back into the original string.

Spaces are detected to identify word boundaries.

Final reversed-word string is printed.

getch() pauses output for user view.

Functions use pointers for efficient memory use.

Program avoids global variables.

Each function has a single responsibility.

Code is modular and easy to understand.

Menu-driven approach improves usability.

Input size is limited to avoid overflow.

ASCII manipulation avoids extra libraries.

String operations are implemented manually.

Program demonstrates arrays and pointers.

Loop control structures are used efficiently.

Conditional statements handle logic flow.

User interaction is continuous until exit.

No dynamic memory allocation is used.

Program works well in Turbo C / GCC (with changes).

conio.h functions are compiler dependent.

Program is suitable for beginners.

Demonstrates real-world string processing.

Code is well structured and readable.

Logical separation of tasks improves debugging.

Safe input handling prevents runtime errors.

Uses standard C programming practices.

Menu allows multiple operations without restarting.

Supports sentence-level input.

Handles spaces correctly.

Case conversion is accurate.

Word reversal keeps word position intact.

Character counting avoids repetition.

Uses null-terminated strings.

Efficient for small string inputs.

Suitable for academic projects.

Demonstrates procedural programming.

Reinforces understanding of strings.

Program output is user-friendly.

Code comments improve clarity.

Works on character-by-character basis.

Shows practical use of arrays.

Uses loops effectively.

Demonstrates function calling.

Encourages code reuse.

Helps learn menu-based programs.

Useful for viva and practical exams.

Overall, it is a complete String Operation Project in C.
