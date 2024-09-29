//1. Find the maximum in 2 numbers.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    double num1,num2;
    printf("Enter the 2 numbers:\n");
    scanf("%lf%lf",&num1, &num2);
    if(num1 > num2)
    printf("\n%lf is greater than %lf\n",num1, num2); 
    else if(num1 < num2);
    printf("\n%lf is greater than %lf\n",num2, num1);
    return 0;
}
