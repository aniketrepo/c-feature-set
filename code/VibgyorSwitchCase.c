# include <stdio.h>

int main()
{
    char ch;
    printf("Please enter a character: ", ch);
    scanf("%c", &ch);

    switch (ch)
    {
        case 'v':
            printf("V stands for violet.\n");
            break;
        case 'i':
            printf("I stands for indigo.\n");
            break;
        case 'b':
            printf("B stands for blue.\n");
            break;
        case 'g':
            printf("G stands for green.\n");
            break;
        case 'y':
            printf("Y stands for yellow.\n");
            break;
        case 'o':
            printf("O stands for orange.\n");
            break;
        case 'r':  
            printf("R stands for red.\n");
            break;
        default:
            printf("The entered character is invalid\n");

    }
    return 0;
}
