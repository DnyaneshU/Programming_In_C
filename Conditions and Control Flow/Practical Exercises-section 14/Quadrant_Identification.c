#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y;
    printf("Enter the 2 coordinates:\n");
    scanf("%d%d",&x,&y);
    if(x>0 && y>0)// we cannot put in x,y>0 collectively
    printf("\nThe point is in first quadrant");
    else if(x>0 && y<0)
    printf("\nThe point is in fourth quadrant");
    else if(x<0 && y>0)
    printf("\nThe point is in second quadrant");
    else 
    printf("\nThe point is in third quadrant");
    return 0;
}