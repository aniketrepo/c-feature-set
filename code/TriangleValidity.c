# include <stdio.h>

int main(){

    int sideA, sideB, sideC;

    printf("Enter the measurement of side A: ");
    scanf("%d", &sideA);

    printf("Enter the measurement of side B: ");
    scanf("%d", &sideB);

    printf("Enter the measurement of side C: ");
    scanf("%d", &sideC);

    if ((sideA + sideB > sideC) && (sideB + sideC > sideA) && (sideC + sideA > sideB)){
        printf("The triangle is valid\n");
    }

    else {
        printf("The triangle is invalid\n");
    }

    return 0;
}
