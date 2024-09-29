#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    printf("Enter 2 numbers:\n");
    scanf("%d%d", &a,&b);

    if(a==b)
    printf("The 2 numbers entered  are equal.");
    else
    printf("The 2 numbers entered  are  not equal.");
    return 0;
}