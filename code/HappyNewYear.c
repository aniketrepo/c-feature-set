# include <stdio.h>

int main()
{
    int countdown = 10;

    while (countdown >= 0){
        printf("%d\n", countdown);
        countdown--;
    }
    printf("HAPPY NEW YEAR!\n");
    
    return 0;
}