# include <stdio.h>

int main(){

    int num;
    int digit;
    int count = 0;
    int orignal = 0;
    int arm = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    orignal = num;

    // calculate the number of digits
    int temp = num;
    while (temp>0){
        temp = num / 10;
        count++;
    }

    // armstrong sum
    int i;
    int power = 0;
    temp = num;
    for (i = 1; i < count; i++){
        power = power * digit;
    }
    
    return 0;
}