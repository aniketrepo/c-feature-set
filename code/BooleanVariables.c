# include <stdio.h>
# include <stdbool.h>

int main()
{
    bool isProgrammingFun = true;
    bool isPhysicsFun = false;
    printf("%d\n", isProgrammingFun);
    printf("%d\n\n", isPhysicsFun);


    printf("%d\n\n", 10>9);   // returns 1 (true)

    printf("%d\n", 10 == 10); // Returns 1 (true), because 10 is equal to 10
    printf("%d\n", 10 == 15); // Returns 0 (false), because 10 is not equal to 15
    printf("%d\n\n", 5 == 55);  // Returns 0 (false) because 5 is not equal to 55

    bool isHamburgerTasty = true;
    bool isPizzaTasty = true;
    printf("%d\n", isHamburgerTasty == isPizzaTasty); // returns 1

    return 0;
}