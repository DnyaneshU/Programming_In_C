// Swap these 2 variables without using a third variable. 

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;

    printf("Give us the first number:\n");
    scanf("%d", &a);
    printf("Give us the second number:\n");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b; 
    printf("the value of first number after swapping is is:%d",a);
    printf("\nthe value of second number after swapping is is:%d",b);
    return 0;
}