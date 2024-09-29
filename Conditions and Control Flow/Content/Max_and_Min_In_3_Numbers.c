//4. Find the maximum in 3 numbers.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num1,num2,num3;
    int max,min;
    printf("Enter the 3 numbers:\n");
    scanf("%d\n%d\n%d", &num1,&num2,&num3);
    max=num1;
    min=num2;
    if(num2>num1)
    {
    max=num2;
    min=num1;
    }
    if(num3>max)
    max=num3;
    if (min>num3)
        min = num3;
    printf("The max number is:%d\nThe min number is:%d", max,min);
    return 0;
}
