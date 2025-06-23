# include <stdio.h>

int main()
{
    int i;

    // (i=0) is executed one time before execution of code block
    // (i<=5) is the condition for executing the code block
    // (i++) is executed every time after the code is executed
    for (i = 0; i <= 5; i++){
        printf("%d\n", i);
    }
    
    return 0;
}