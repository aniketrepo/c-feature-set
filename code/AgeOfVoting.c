# include <stdio.h>
# include <stdbool.h>

int main()
{
    int myAge = 15;
    int votingAge = 18;

    printf("%d\n", myAge >= votingAge);   // returns 0, 15 year olds aren't allowed to vote

    return 0;
}
