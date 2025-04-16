#include <stdio.h>

int main()
{
    char ch;
    
    printf("Please enter a character: ", ch);
    scanf("%c", &ch);

    printf("ASCII value of '%c' is %d", ch, ch);
    
    clrscr();
    getchar();
    return 0;
}