//1. Calculate the n-th term of an arithmetic series. 
#include<stdio.h>
#include<stdlib.h>
int main()
{
   // test case: d=2,a1=1,n=9 and an=17
    float d,a1;
    int n;
    int an;
    printf("The common difference for this AP is:");
    scanf("%f",&d);
    printf("The first term for this AP is:");
    scanf("%f",&a1);
    printf("The no. of terms for this AP is:");
    scanf("%d",&n);
    an=a1+(n-1)*d;
    printf("the output for the given arithmetic series is:%d", an);
    return 0;
}
