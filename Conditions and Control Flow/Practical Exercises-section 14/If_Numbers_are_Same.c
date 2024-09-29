#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    printf("Enter the 2 numbers:\n");
    scanf("%d%d", &a,&b);
    if(a==b)
    printf("True");
    else 
    printf("False");
    return 0;
}