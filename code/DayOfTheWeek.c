# include <stdio.h>

int main(){

    int day;

    printf("Please enter a number between 1 and 7: ");
    scanf("%d", &day);

    if (day==1) {
        printf("It's Monday.\n");
    }

    else if (day==2) {
        printf("It's Tuesday.\n");
    }

    else if (day==3) {
        printf("It's Wednesday.\n");
    }

    else if (day==4) {
        printf("It's Thursday.\n");
    }

    else if (day==5) {
        printf("It's Friday.\n");
    }

    else if (day==6) {
        printf("It's Saturday.\n");
    }

    else if (day==7) {
        printf("It's Sunday.\n");
    }

    else {
        printf("INVALID ENTRY\n");
    }

    return 0;
}