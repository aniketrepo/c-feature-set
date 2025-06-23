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
- The **newline character `(\n)`** is called an **escape sequence**, and it **forces the cursor to change its position to the beginning of the next line on the screen, which results in a new line.**
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

### Operations with variables
- When we assign a new value to an existing variable, it **overwrites the previous value**.
- We can also add variables using the `+` operator.
- We can declare multiple variables of the same type using a **comma-separated** list.

### C Variable Names (Identifiers)
- All C variables must be **identified** with **unique names**.
- Theses unique names are called **identifiers**.
- They can be short names (like x and y) or long and descriptive (like sum or TotalValue)
- It is recommended to use descriptive names in order to create and maintain understandable code.
- Some general rules for variable naming,
	- Names can contain **letters, digits and underscores**.
	- Names **must begin** with a **letter or an underscore `(_)`**.
	- Names are **case-sensitive** (`myvar` and `myVar` are different variables).
	- **Reserved words (such as `int`)** cannot be used as names.

## C Data Types
- As we already know, a variable must be a specified **data type**, and we must use a **format specifier** inside the `printf()` function to display it.

### Basic Data Types
- The data type specifies the **size and type** of information the variable will store.

	|Data Type|Size|Description|Example|
	|-----------|-----|------------|---------|
	|`int`|2 or 4 bytes|Stores whole numbers, without decimals|`1`|
	|`float`|4 bytes|Stores factorial numbers, containing one or more decimals, sufficient for storing 6-7 decimal digits|`1.99`|
	|`double`|8 bytes|Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits|`1.99`|
	|`char`|1 byte|Stores a single character/letter/number, or ASCII values|`'A'`|

### Basic Format Specifiers
- There are different format specifiers for each data type. Some of them are

	|Format Specifier|Data Type|
	|------------------|-----------|
	|`%d` or `%i`|`int`|
	|`%f` or `%F`|`float`|
	|`%lf`|`double`|
	|`%c`| `char` |
	|`%s` |`str`|


### Character Data Types
- The `char` data type is used to store a **single** character.
- The character must be stored by single quotes, like `'A'` or `'C'`.
- We use the format specifier `%c` to print it.
- If we try to store more than a single character, it will only print the last character.

### Numeric Data Types
- The `int` data type is used to store a **whole number without decimals**.
- The `float` or `double` data type is used to store a **floating point number**.
	- `float` is used for less precision (~6~7 decimal digits) and smaller memory footprint (4 bytes)
	- `double` is used for higher precision (~15~16 decimal digits) and has a higher memory footprint (8 bytes)
- **Scientific Numbers:**
	- A floating point number can also be a scientific number with an **"e"** to **indicate the power of 10.**

### Decimal Precision
- We already know that upon printing a floating point number, the output will show many digits after the decimal point.
- To remove the extra zeroes, we can use a dot (`.`) followed by a number which specifies how many digits should be shown after the decimal point.

### Memory Size
- The memory size of a variable varies depending on the type:

| Data Type | Size         |
| --------- | ------------ |
| `int`     | 2 or 4 bytes |
| `float`   | 4 bytes      |
| `double`  | 8 bytes      |
| `char`    | 1 byte       |
- The memory size refers to how much space a type occupies in the ***computer's memory***.
- To get the size of a data type in bytes, we use **the `sizeof` operator**.

### Type Conversion
- When we convert the value of one data type to another type, it is known as **Type Conversion**.
- They are of two types-

| Implicit Type Conversion                                                                                              | Explicit Type Conversion                                                                                               |
| --------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------- |
| Implicit conversion is done automatically by the compiler when you assign a value of one type to another.             | Explicit conversion is done manually by placing the type in parentheses `()` in front of the value.                    |
### Constants
- When we don't want a variable's value to be modified after it's initialisation, we use the `const` keyword to declare it as a constant.
- We should always declare the variable as constant when we have values that are unlikely to be changed.
- Some key-points to take note,
	- When we declare a constant variable, it **must** be assigned with a value.
	- It is considered good practice to declare constant variables with uppercase.

### Operators
- They are  used to perform operations on variables and values.
- The are divided into the following groups,

#### Arithmetic Operators

| Operator | Name           | Description                                           | Example |
| -------- | -------------- | ----------------------------------------------------- | ------- |
| `+`      | Addition       | Adds two values                                       | `x+y`   |
| `-`      | Subtraction    | Subtracts one value from another                      | `x-y`   |
| `*`      | Multiplication | Multiplies two values                                 | `x*y`   |
| `/`      | Division       | Divides one value from another, returns the quotient  | `x/y`   |
| `%`      | Modulus        | Divides one value from another, returns the remainder | `x%y`   |
| `++`     | Increment      | Increases the value of a variable by 1                | `++x`   |
| `--`     | Decrement      | Decreases the value of a variable by 1                | `--x`   |
	-