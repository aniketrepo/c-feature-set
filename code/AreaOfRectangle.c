// A code which calculates the area of a rectangle

# include <stdio.h>

int main()
{
    // length and breadth
    int length = 10;
    int breadth = 5;
    int area;

    // calculate the area
    area = length * breadth;

    // print them
    printf("The length of the rectangle is %d units.\n", length);
    printf("The breadth of the rectangle is %d units.\n", breadth);
    printf("The area of the rectangle is %d sq. units.\n", area);

    getchar();
    return 0;
}
