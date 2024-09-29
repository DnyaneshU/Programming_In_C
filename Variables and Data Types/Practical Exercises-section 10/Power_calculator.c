//7. Calculate the powers of a given no.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int x;
    printf("Enter the number:");
    scanf("%d", &x);
    //pow function always returns a double data type. So:%lf.
    printf("The result is:\nx^2=%lf\nx^4=%lf\nx^6=%lf\nx^8=%lf\nx^10=%lf", pow(x,2),pow(x,4),pow(x,6),pow(x,8),pow(x,10));
    return 0;
}
