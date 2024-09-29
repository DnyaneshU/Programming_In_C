// Create a weather station.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    double Celsius;
    printf("Enter the temperature in Celcius: ");
    scanf("%lf",&Celsius);
    //this is where casting occurs where we are converting a double value to a double using (double) 
    printf("The temperature in Farheinheit is:%lf\n",((double)9/5)*Celsius + 32);
    return 0;
}

/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    double Farheineit;
    printf("Enter the temperature in Farheineit: ");
    scanf("%lf",&Farheineit);
    //this is where casting occurs where we are converting a double value to a double by having a floating value 1.8
    printf("The temperature in Celsius is:%lf\n",(Farheineit-32)/1.8);
    return 0;
}
*/
