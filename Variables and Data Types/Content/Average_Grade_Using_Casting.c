// Write a code explaining casting operation by taking grades of a student as a criteria.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int Grade1,Grade2,Grade3;
    double AverageGrade;
    printf("Enter Grade-1:\n");
    scanf("%d",&Grade1);
    printf("Enter Grade-2:\n");
    scanf("%d",&Grade2);
    printf("Enter Grade-3:\n");
    scanf("%d",&Grade3); 
    AverageGrade=(Grade1+Grade2+Grade3)/3.0;//We could have also written ((double)Grade1+Grade2+Grade3)/3 or simply (double)(Grade1+Grade2+Grade3)/3
    //by dividing by 3.0,i.e,(double)3.0. So, we get the variable AverageGrade as a float type variable.
    printf("The Average Grade is:%lf",AverageGrade);
    return 0;
}

