//6. Removing the decimal part.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float data;
    printf("Enter the number:");
    scanf("%f", &data);
    printf("\n The decimal part is:%f", data - (int)data);
    return 0;
}
