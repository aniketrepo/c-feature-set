# include <stdio.h>

int main(){

    int age[] = {20, 22, 18, 35, 48, 26, 87, 70};
    float avg, sum = 0;

    // length of array
    int length = sizeof(age) / sizeof(age[0]);

    // loop through array
    for (int i = 0; i < length; i++){
        sum = sum + age[i];
    }
 
    // average
    avg = sum / length;

    printf("The average of ages is %.2f\n", avg);

    return 0;
}
