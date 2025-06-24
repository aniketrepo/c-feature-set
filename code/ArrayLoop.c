#include <stdio.h>

int main()
{
    int myNums[] = {12345, 1234, 123, 12, 1};
    int i;

    for (i=0; i<5; i++){
        printf("%d\n", myNums[i]);
    }

    return 0;
}