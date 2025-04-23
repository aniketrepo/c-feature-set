#include <stdio.h>

int main()
{
    char ch;
    
    printf("Please enter a character: ", ch);
    scanf("%c", &ch);

    printf("ASCII value of '%c' is %d\n", ch, ch);
    
    getchar();
    return 0;
}