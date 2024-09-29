#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    printf("Enter the 3 integers:\n");
    scanf("%d%d%d", &a,&b,&c);

    if (a==0 || b==0 || c==0)
    printf("Cannot divide if 1 of the number is 0");
    else if((c%b==0 || b%c==0) && (b%a==0 || a%b==0) && (c%a==0 || a%c==0))
    printf("Divisible");
    else
    printf("Not Divisible");
    return 0;
}