//2. Calculate the sum of a given AP.
#include<stdio.h>
#include<stdlib.h>
int main()
{
   // test case: d=2,a1=1,n=9,an=17 and Sn=81,
    float d,a1,Sn;
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
    Sn=(a1+an)*n/2;
    printf("\nthe sum for the given arithmetic series is:%f", Sn);
    return 0;
}
