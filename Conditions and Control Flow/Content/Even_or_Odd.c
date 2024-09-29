//2. Is number odd or even?
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    if(num%2==0)//is(num%2!=0);
    printf("\nThe number is even.");
    else 
    printf("The number is odd");
    return 0;
}
