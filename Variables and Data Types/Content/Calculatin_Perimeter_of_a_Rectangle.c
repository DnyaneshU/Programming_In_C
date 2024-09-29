// Calculate the perimeter of a rectangle
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    double Height;
    double Width;
    //double Perimeter;
    printf("The Height is:");
    scanf("%lf", &Height);
    printf("The Width is:");
    scanf("%lf", &Width);
    printf("The perimeter of the rectangle is:%lf",2*(Height+Width));
    /*
    Perimeter = 2*(Height+Width);
    printf("The perimeter of the rectangle is:%lf", Perimeter);
    */
    return 0;
}
