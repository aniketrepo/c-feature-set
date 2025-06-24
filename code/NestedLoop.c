# include <stdio.h>

int main()
{
    int i, j;

    // outer loop
    for (i=1; i<=2; ++i){
        printf("Outer: %d\n", i);

        // inner loop
        for (j=1; j<=3; ++j){
            printf("Inner: %d\n", j);
        }
    }

    return 0;
}