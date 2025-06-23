# Introduction to C Programming

## What is C?

- C is a general purpose programming language created by Dennis Ritchie at the Bell Laboratories in 1972.
- It is a very popular language, despite being old. The main reason for its popularity is because it is a fundamental language in the field of computer science.
- C is strongly associated with UNIX, as it was developed to write the UNIX operating system.

## Difference Between C and C++

- C++ was developed as an extension of C, as both languages have the same syntax.
- The main difference between C and C++ is that C++ supports classes and objects, while C does not.

# Basics of C Code

## Understanding a Basic C Program

```c
# include <stdio.h> 

int main()
{
    printf("Hello World!\n");
    return 0;
}
```

- Line 1: `# include <stdio.h>` is a **header file library** that lets us work with input and output functions, such as `printf()`.
- Line 2: A blank line. C ignores white space, but we use it to make the program more readable.
- Line 3: `int main()` is called a **function**. Any code in its curly brackets `{}` will be executed.
- Line 4: `printf()` is a **function** used to output/print text to the screen. In this case, it will output **Hello World!**
- Line 5: `return 0;` ends the `main()` function.

## Statements in C

- A computer program is a **list of instructions to be executed by a computer**.
- These instructions are called **statements**.
- Example: `printf("Hello World!");`
- Each statement must end with a semicolon `;`.

## What is `\n`?

- The **newline character (`\n`)** is an **escape sequence** that forces the cursor to move to the beginning of the next line.
- Other common escape sequences:

| Escape Sequence | Description                   |
|------------------|-------------------------------|
| `\t`             | Creates a horizontal tab       |
| `\\`             | Inserts a backslash character  |
| `\"`             | Inserts a double quote         |

## Comments in C

- Used to explain code or disable code during testing.
- Types: **single-line** and **multi-line**.

### Single-Line Comments

- Begin with `//`
- Text after `//` is ignored by the compiler.

### Multi-Line Comments

- Begin with `/*` and end with `*/`
- All content inside is ignored by the compiler.

# Variables and Data Types

## Variables in C

- Containers for storing data values.
- Common types:
  - `int` – integers
  - `float` – decimal numbers
  - `char` – single characters

### Format Specifiers

- Used with `printf()` to specify data type:
  - `int` – `%d`
  - `float` – `%f`
  - `char` – `%c`
  - `string` – `%s`

### Operations with Variables

- Assigning a new value overwrites the old one.
- You can add variables using `+`.
- Declare multiple variables of the same type using commas.

### Variable Names (Identifiers)

- Must be unique.
- Rules:
  - Can contain letters, digits, and underscores.
  - Must start with a letter or underscore.
  - Are case-sensitive.
  - Cannot use reserved words.

## Data Types in C

- Define the type and size of data a variable holds.

### Basic Data Types

| Data Type | Size        | Description                                   | Example |
|-----------|-------------|-----------------------------------------------|---------|
| `int`     | 2 or 4 bytes | Whole numbers                                | `1`     |
| `float`   | 4 bytes      | Decimal numbers (6–7 digits precision)        | `1.99`  |
| `double`  | 8 bytes      | Decimal numbers (15–16 digits precision)      | `1.99`  |
| `char`    | 1 byte       | Characters or ASCII values                    | `'A'`   |

### Format Specifiers for Data Types

| Format Specifier | Data Type |
|------------------|-----------|
| `%d`, `%i`       | `int`     |
| `%f`, `%F`       | `float`   |
| `%lf`            | `double`  |
| `%c`             | `char`    |
| `%s`             | `string`  |

### Character Data Types

- Use `'A'`, `'Z'` etc.
- `%c` to print.
- Only last character prints if more than one provided.

### Numeric Data Types

- `int` for whole numbers.
- `float` / `double` for decimals.
- Use `e` for scientific notation, e.g., `3.5e2`.

### Decimal Precision

- Use `%.nf` to control number of digits after decimal.

### Memory Size

| Data Type | Size         |
|-----------|--------------|
| `int`     | 2 or 4 bytes |
| `float`   | 4 bytes      |
| `double`  | 8 bytes      |
| `char`    | 1 byte       |

- Use `sizeof` to get memory size of a variable.

### Type Conversion

| Implicit Conversion          | Explicit Conversion                    |
|------------------------------|----------------------------------------|
| Automatically by compiler    | Manually with `(type)` before value    |

## Constants in C

- Use `const` keyword.
- Must assign value at declaration.
- Good practice to use uppercase for constant names.

# Operators in C

## Arithmetic Operators

| Operator | Name           | Description                                           |
|----------|----------------|-------------------------------------------------------|
| `+`      | Addition       | Adds two values                                       |
| `-`      | Subtraction    | Subtracts one from another                           |
| `*`      | Multiplication | Multiplies two values                                |
| `/`      | Division       | Divides one by another (returns quotient)            |
| `%`      | Modulus        | Returns the remainder                                |
| `++`     | Increment      | Increases value by 1                                 |
| `--`     | Decrement      | Decreases value by 1                                 |

## Assignment Operators

| Operator | Example   | Equivalent   |
| -------- | --------- | ------------ |
| `=`      | `x = 5`   | `x = 5`      |
| `+=`     | `x += 3`  | `x = x + 3`  |
| `-=`     | `x -= 3`  | `x = x - 3`  |
| `*=`     | `x *= 3`  | `x = x * 3`  |
| `/=`     | `x /= 3`  | `x = x / 3`  |
| `%=`     | `x %= 3`  | `x = x % 3`  |
| `&=`     | `x &= 3`  | `x = x & 3`  |
| `\|=`    | `x \|= 3` | `x = x \| 3` |
| `^=`     | `x ^= 3`  | `x = x ^ 3`  |
| `>>=`    | `x >>= 3` | `x = x >> 3` |
| `<<=`    | `x <<= 3` | `x = x << 3` |

## Comparison Operators

| Operator | Name                     | Example  | Description                                  |
|----------|--------------------------|----------|----------------------------------------------|
| `==`     | Equal to                 | `x == y` | True if equal                                |
| `!=`     | Not equal                | `x != y` | True if not equal                            |
| `>`      | Greater than             | `x > y`  | True if left is greater                      |
| `<`      | Less than                | `x < y`  | True if left is smaller                      |
| `>=`     | Greater than or equal to | `x >= y` | True if left is greater or equal             |
| `<=`     | Less than or equal to    | `x <= y` | True if left is smaller or equal             |

## Logical Operators

| Operator | Name | Example              | Description                      |
| -------- | ---- | -------------------- | -------------------------------- |
| `&&`     | AND  | `x < 5 && x < 10`    | True if both conditions are true |
| `\|\|`   | OR   | `x < 5 \|\| x < 4`   | True if one condition is true    |
| `!`      | NOT  | `!(x < 5 && x < 10)` | Reverses the result              |

# Booleans in C

## Boolean Variables

- C doesn't have native `bool` — use `#include <stdbool.h>`
- `bool` can be `true` (1) or `false` (0)
- Use `%d` to print boolean values.

# If... Else
## If
- We use the `if` statement to specify a block of code to be executed if a condition is `true`.
- `if` statement is case-sensitive, using it in caps will generate an error.
## Else
- We use the `else` statement to specify a block of code to be executed if the condition is `false`.
## Else If
- We use the `else if` statement to specify a new condition if the first condition is `false`.
## Short Hand If... Else
- This is known as the **ternary operator** because it consists of three operands.
- It can be used to replace multiple lines of code with a single line.
- It is often used to replace simple if else statements.