# include <stdio.h>

int main(){

    int a, b, i, j, rows;

    printf("Please enter the number of rows the pyramid should have: ");
    scanf("%d", &rows);

    for (i=1; i<=rows; i++){
        for (j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    
    for (a=1; a<=rows; a++){
        for (b=rows; b>=a; b--){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
