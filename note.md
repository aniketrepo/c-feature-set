## What is C?
- C is a general purpose programming language created by Dennis Ritchie at the Bell Laboratories in 1972.
- It is a very popular language, despite being old. The main reason for its popularity is because it is a fundamental language in the field of computer science.
- C is strongly associated with UNIX, as it was developed to write the UNIX operating system.

## Difference between C and C++
- C++ was developed as an extension of C, as both languages have the same syntax.
- The main difference between C and C++ is that C++ supports classes and objects, while C does not.

## Some crucial stuff about a code

```
# include <stdio.h> 

int main()
{
    printf("Hello World!\n");
    return 0;
}
```

- Line 1
    - `# include <stdio.h>` is a  **header file library** that lets us work with input and output functions, such as `printf()`.
    - **A header file adds functionality to a program.**
- Line 2
    - A blank line, C ignores white space, but we use it to make the program more readable.
- Line 3
    - `int main()` is called a **function**. Any code in its curly brackets `{}` will be executed.
- Line 4
    - `printf()` is a **function** used to output/print text to the screen. In this case, it will output **Hello World!**
- Line 5
    - `return 0` ends the `main()` function.

## Statements
- A computer program is a **list of "instructions" to be "executed" by a computer**.

- In a programming language, **these programming instructions are called statements**.

- The following statement "instructs" the compiler to print the text "Hello World" to the screen,  `printf("Hello World!");`

- It is important that you end the statement with a semicolon `;`, if you forget that, an error will occur and the program will not run.

- The above program has two statements, 
    - `printf("Hello World!\n");` to print "Hello World!" to the screen.
    - `return 0;` to end the C program successfully.

## What is `\n`?
- The **newline character `(\n)`** is called an **escape sequence**, and it forces the cursor to change its position to the beginning of the next line on the screen, which results in a new line.
- Some other examples of valid escape sequences are,
    |Escape Sequence|Description|
    |---------------|---------------|
    |`\t`                   |Creates a horizontal tab|
    |`\\`                   |Inserts a backlash character `(\)`|
    |`\"`                   |Inserts a double quote `(")`|

## Comments in C
- Comments can be used to explain code, and to make it more readable.
- It can also be used to prevent execution when testing an alternative code.
- Comments can be **single-lined** or **multi-lined**.

### Single-line comments
- These begin with **two forward slashes** `(\\)`.
- Any text between `(\\)` and at the end of the line is ignored by the compiler (will not be executed.)

### Multi-line comments
- These begin with `\*` and end with `*\`.
- Any text between `\*` and `*\` will be ignored by the compiler.

## C variables
- Variables are containers for storing data values, like numbers and characters.
- In C, there are different types of variables (defined with different keywords),
	- `int` - stores **integers (whole numbers) without decimals**, such as `123` or `-123`.
	- `float` - stores **floating point numbers, with decimals** such as `19.99` or `-19.99`.
	- `char` - stores **single characters** such as `'a'` or `'b'`. Characters are surrounded by **single quotes**.

### Format Specifiers
- These specifiers are used together with the `printf()` function to tell the compiler what type of data is being stored.
- It is basically a **placeholder** for the variable value.
- A format specifier starts with a `%` sign and followed by a character,
	- `int` - `%d`
	- `float` - `%f`
	- `char` - `%c`
	- `str` - `%s`

## Operations with variables
- When we assign a new value to an existing variable, it **overwrites the previous value**.
- We can also add variables using the `+` operator.

