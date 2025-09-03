# include <stdio.h>

int main(){

    int x, y;

    printf("Enter number 1: ");
    scanf("%d", &x);

    printf("Enter number 2: ");
    scanf("%d", &y);

    if (x > y){
        printf("%d is greater\n", x);
    }

    else {
        printf("%d is greater\n", y);
    }
    
    return 0;
}