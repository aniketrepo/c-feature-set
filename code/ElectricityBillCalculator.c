# include <stdio.h>

int main(){

    float cost;
    float units;

    printf("Enter the number of units consumed: ");
    scanf("%f", &units);
    
    if (units <= 100){
        cost = units * 1.5;
        printf("Your bill is %f/n", cost);
    }

    else if ((units > 100) && (units <= 200)){
        cost = (units * 1.5) * 
    }


    return 0;
}
