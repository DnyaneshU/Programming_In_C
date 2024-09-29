// Write a code explaining casting operations with a simple division example.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=5;
    int b=2;
    double c=(double)a/b;//or we could have used  double c=a/(double)b;
    printf("the result is:%0.2lf", c);
    return 0;
}

