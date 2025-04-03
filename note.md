## What is C?
- C is a general purpose programming langauge created by Dennis Ritchie at the Bell Laboratories in 1972.
- It is a very popular langauge, despite being old. The main reason for its popularity is because it is a fundamental langauge in the field of computer science.
- C is strongly associated with UNIX, as it was developed to write the UNIX operating system.

## Difference between C and C++
- C++ was developed as an extension of C, as both langauges have the same syntax.
- The main difference between C and C++ is that C++ supports classes and objects, while C does not.

## Code 1

```
# include <stdio.h>

int main()
{
    printf("Hello World!\n");
    return 0;
}
```
### Line 1
- `# include <stdio.h>` is a  **header file library** that lets us work with input and output functions, such as `printf()`. **A header file adds functionality to a program.**

### Line 2
- A blank line, C ignores white space, but we use it to make the program more readable.

### Line 3
- `int main()` is called a **function**. Any code in its curly brackets `{}` will be executed.

### Line 4
- `printf()` is a **function** used to output/print text to the screen. In this case, it will output **Hello World!**

### Line 5
- `return 0` ends the `main()` function.