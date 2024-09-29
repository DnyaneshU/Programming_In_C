// Swap these 2 variables using a third variable. 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a=10.0,b=20.0, c;
    printf("the value of variable a before swapping is:%0.2f",a);
    printf("\nthe value of variable b before swapping is:%0.2f",b);
    c=a;
    a=b;
    b=c;
    printf("\nthe value of a after swapping is:%0.2f",a);
    printf("\nthe value of b after swapping is:%0.2f\n",b);
    return 0; 
}
