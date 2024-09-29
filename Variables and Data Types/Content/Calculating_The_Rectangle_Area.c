// Calculate the area of a rectangle defining variables.
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    double Height;
    double Width;
    //double Area;
    printf("The Height is:");
    scanf("%lf", &Height);
    printf("The Width is:");
    scanf("%lf", &Width);
    printf("The area of the rectangle is:%lf", Height*Width);
    /*
    Area=Height*Width;
    printf("The area of the rectangle is:%lf", Area);
    */
    return 0;
}
