# include <stdio.h>

int main(){

    int age[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int i;

    // length of array
    int length = sizeof(age) / sizeof(age[0]);

    // create a variable and assign the first value of the array to it

    int lowestAge = age[0];

    // loop through the elements to find the lowest age
    for (i = 0; i < length; i++){
        if (lowestAge > age[i]){
            lowestAge = age[i];
        }
    }

    printf("The lowest age is %d\n", lowestAge);

    return 0;
}
