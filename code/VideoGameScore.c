# include <stdio.h>

int main()
{
    // program to calculate the percentage of a user's max score in a video game

    int MaxScore = 999;
    int UserScore = 842;
    float PercentageScore = (float) UserScore / MaxScore * 100.0;

    printf("User's score percentage is %.2f%\n", PercentageScore);

    return 0;
}