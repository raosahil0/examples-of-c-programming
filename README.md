# examples-of-c-programming
laguaguage compiler development
How "Hello, World!" program works?
.The #include is a preprocessor command that tells the compiler to include the contents of stdio.h (standard input and output) file in the program.
.The stdio.h file contains functions such as scanf() and printf() to take input and display output respectively.
.If you use the printf() function without writing #include <stdio.h>, the program will not compile.
.The execution of a C program starts from the main() function.
.printf() is a library function to send formatted output to the screen. In this program, printf() displays Hello, World! text on the screen.
.The return 0; statement is the "Exit status" of the program. In simple terms, the program ends with this statement.
#
How does the switch statement work?

The expression is evaluated once and compared with the values of each case label.

If there is a match, the corresponding statements after the matching label are executed. For example, if the value of the expression is equal to constant2, statements after case constant2: are executed until break is encountered.
If there is no match, the default statements are executed.
Notes:
.If we do not use the break statement, all statements after the matching label are also executed.
.The default clause inside the switch statement is optional.
