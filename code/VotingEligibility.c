# include <stdio.h>

int main(){

    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age <= 18){
        printf("You are not eligible to vote\n");
    }

    else {
        printf("Your are eligible to vote\n");
    }
    
    return 0;
}
