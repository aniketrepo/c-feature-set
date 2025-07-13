# include <stdio.h>

int main(){

    int marks;
    int value;

    printf("Please enter your marks: ");
    scanf("%d", &marks);

    value = marks/10;

    switch (value) {
        case 10: printf("Grade A\n");
        break;

        case 9: printf("Grade A\n");
        break;

        case 8: printf("Grade B\n");
        break;

        case 7: printf("Grade C\n");
        break;
        
        default: printf("Fail\n");
    }
    

    return 0;
}