# include <stdio.h>

int main(){

    int num, orignal, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    orignal = num;

    if (num < 0){
        num = -num;
    }

    while (num > 0){
        int digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    if (num < 0){
        rev = -rev;
    }
    
    printf("Reversed number is %d\n", rev);
    
    return 0;
}
