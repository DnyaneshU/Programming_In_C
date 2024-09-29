#include<stdio.h>
#include<stdlib.h>
int main()
{
    int year;
    printf("Enter the year:\n");
    scanf("%d", &year);

    if(year%4==0 || year%400==0)
    printf("It was a leap year");
    else if (year%100==0)
    printf("It wasn't a leap year");
    else
    printf("It wasn't a leap year");
    return 0;
}