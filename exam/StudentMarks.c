# include <stdio.h>

int main(){

    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks>=90){
        printf("Grade A\n");
    }
    
    else if (marks>=75){
        if (marks>=85){
            printf("Grade B+\n");
        }
        else {
            printf("Grade B\n");
        }
    }
    else if (marks>=60){
        printf("Grade C\n");
    }
    else {
        printf("Grade F\n");
    }
    
    return 0;
}