//8. Calculate the sum of a triple digit no.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    int units,tens,hundreds;
    printf("Enter a 3 digit number:");
    scanf("%d", &num);
    units=num%10;
    tens=(num/10)%10;
    hundreds=num/100;
    printf("The sum of this 3 digit is:%d", units+tens+hundreds);
    return 0;
}