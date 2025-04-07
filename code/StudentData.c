// A code which stores different data about a college student

# include <stdio.h>

int main()
{
    // Student's data
    int studentID = 15;
    int studentAge = 21;
    float studentFee = 200;
    char studentGrade = 'B';

    // Printing them
    printf("Student ID = %d\n", studentID);
    printf("Student age = %d years\n", studentAge);
    printf("Student fee = $%f\n", studentFee);
    printf("Student grade = %c\n", studentGrade);

    getchar();
    return 0;
}
