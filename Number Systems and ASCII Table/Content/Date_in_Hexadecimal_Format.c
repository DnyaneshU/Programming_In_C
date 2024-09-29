#include<stdio.h>
#include<stdlib.h>
int main()
{
    int day,month,year;
    printf("Enter the day:");
    scanf("%d",&day);
    printf("Enter the month:");
    scanf("%d",&month);
    printf("Enter the year:");
    scanf("%d",&year);

    // Print in hexadecimal format
    printf("The day in hexadecimal format is: 0x%X\n",day);
    printf("The month in hexadecimal format is: 0x%X\n",month);
    printf("The year in hexadecimal format is: 0x%X\n",year);
     
    // Print in octal format
    printf("The day in octal format is: %o\n", day);
    printf("The month in octal format is: %o\n", month);
    printf("The year in octal format is: %o\n", year);

    return 0;
}