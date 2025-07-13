# include <stdio.h>

int main(){

    int num;
    int orignal;
    int reversed = 0;
    int digit;


    printf("Enter a number: ");
    scanf("%d", &num);

    orignal = num;

    while (num > 0){
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    if (reversed == orignal){
        printf("%d is a palindrome.\n", orignal);
    }

    else {
        printf("%d is not a palindrome.\n", orignal);
    }
    
    return 0;
}