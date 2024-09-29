//10. Calculate the distance between 2 points.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    double num1,num2;
    printf("Enter the coordinates of number 1 and number 2:\n");
    scanf("%lf %lf",&num1, &num2);
    //this is the process of writing pow function: sqrt(pow(x2 - x1, 2).
    printf("the distance between these 2 coordinates is:%lf", sqrt(pow(num2 - num1, 2) + pow(num2 - num1, 2)));
    return 0;
}