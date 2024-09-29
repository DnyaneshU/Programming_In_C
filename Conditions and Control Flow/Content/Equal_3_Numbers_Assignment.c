#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    printf("Enter 3 numbers:\n");
    scanf("%d%d%d", &a,&b,&c);
    
    if(a==b && b==c)
    printf("The 3 numbers entered by you are equal");
    else
    printf("The 3 numbers entered by you are not equal");
    return 0;
}