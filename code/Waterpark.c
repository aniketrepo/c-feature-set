# include <stdio.h>

int main()
{
    int age;

    printf("Please enter your age: ");
    scanf("%d", &age);

    switch(age >=5 && age <=18)
    {
        case 1:
            printf("ALLOWED");
            break;

        case 0:
            printf("NOT ALLOWED");
            break;
    }    
    return 0;
}