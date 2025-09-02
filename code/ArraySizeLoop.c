# include <stdio.h>

int main(){

    int myNum[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95, 100};
    int length = sizeof(myNum) / myNum[0];
    int i;

    for (i = 0; i < length; i++){
        printf("%d\n", myNum[i]);
    }

    // will print the elements of an array one by one, no matter the size of it.

    return 0;
}