//3. Calculate the salary of an employee based on the no. of hours they work.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    double Salary;
    float Hours;
    printf("The salary for this role per hour is:");
    scanf("%lf",&Salary);
    printf("The number of hours this employee has worked is:");
    scanf("%f", &Hours);
    printf("The salary earned by this employee this month is:%lf", Salary*Hours);
    return 0;
}
