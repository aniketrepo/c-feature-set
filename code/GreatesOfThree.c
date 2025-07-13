# include <stdio.h>

int main(){

    int num1, num2, num3;

    printf("Please enter number 1: ");
    scanf("%d", &num1);

    printf("Please enter number 2: ");
    scanf("%d", &num2);

    printf("Please enter number 3: ");
    scanf("%d", &num3);

    if (num1>=num2 && num1>=num3){
        printf("%d is the greatest number.\n", num1);
    }

    else if (num2>=num1 && num2>=num3){
        printf("%d is the greatest number.\n", num2);
    }

    else{
        printf("%d is the greatest number.\n", num3);
    }

    return 0;
}