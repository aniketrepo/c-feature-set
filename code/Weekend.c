# include <stdio.h>

int main()
{
    int day = 4;

    switch (day){
        case 6:
        printf("Saturday\n");
        break;

        case 7:
        printf("Sunday\n");
        break;

        default:
        printf("Looking forward for the weeken, eh?\n");
    }
    
    return 0;
}