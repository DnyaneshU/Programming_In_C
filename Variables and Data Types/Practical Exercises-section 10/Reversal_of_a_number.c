//9. Reverse a given no..
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    int units,tens,hundreds;
    int temp;
    //int reversedNum;
    printf("Enter a 3 digit number:");
    scanf("%d", &num);
    units=num%10;
    tens=(num/10)%10;
    hundreds=num/100;
    printf("The units place of this number is:%d,\ntens place of this number is:%d\nhundreds place of this number is:%d", units, tens, hundreds);
    temp=units;
    units=hundreds;
    hundreds=temp;
    printf("\nThe reversed number now is:%d%d%d", hundreds,tens,units);
    /*reversedNum=units*100+tens*10+hundreds;
    printf("\nThe reversed number now is:%d", reversedNum);*/
    return 0;
}
