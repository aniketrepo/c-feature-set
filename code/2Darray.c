# include <stdio.h>

int main(){

    int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};

    // access the elements of the array
    printf("%d\n\n", matrix[0][2]);

    // change the elements of the array
    matrix[0][0] = 9;
    printf("%d\n\n", matrix[0][0]);
    
    // loop through the array
    int i, j;
    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            printf("%d\n", matrix[i][j]);
        }
    }

    return 0;
}
