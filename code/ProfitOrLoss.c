# include <stdio.h>

int main(){

    float CostP, SellP;

    printf("Enter the cost price: ");
    scanf("%f", &CostP);

    printf("Enter the sell price: ");
    scanf("%f", &SellP);

    if (CostP > SellP){
        printf("This is a loss\n");
    }

    else if (CostP < SellP){
        printf("This is a profit\n");
    }
    
    else {
        printf("No profit, no loss\n");
    }

    return 0;
}
