# include <stdio.h>

int main()
{
    // Format Specifiers
    int age = 19;
    char name[100] = "Aniket";
    float height = 5.9;
    char grade = 'A';

    // Printing them
    printf("My name is %s, I am %d years old, my height is %f and my grade is %c.", name, age, height, grade);
    getchar();
    return 0;
}
