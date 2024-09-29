#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    printf("Enter  a number: ");
    scanf("%d", &num);
    if(num>9 && num<=99)
    printf("Number is a double digit number");
    else if(num>99 && num<=999)
    printf("Number is a triple digit number");
    else 
    printf("The given number is neigther double nor a triple digit number");
    return 0;
}