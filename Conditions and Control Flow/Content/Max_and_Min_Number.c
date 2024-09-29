//3. Print the max and min numbers.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float num1,num2;
    printf("Enter the  2 numbers:\n");
    scanf("%f\n%f", &num1, &num2);
    if(num1 > num2)
    printf( "%f is greater and %f is lesser\n" , num1 , num2 );
    else
    printf("%f is greater and %f is lesser\n" , num2 , num1 );  
}
