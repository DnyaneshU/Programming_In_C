#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double a;
    printf("Enter a number:\n");
    scanf("%lf", &a);
    
    if (a < 0)
        printf("The absolute value of %lf is %d\n", a, (int)a);//if we have an integer: -1*a  
    else
        printf("The absolute value of %lf is %d\n", a, abs(a));
    return 0;
}
