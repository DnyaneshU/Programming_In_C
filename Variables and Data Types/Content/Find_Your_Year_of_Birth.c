// Find your birthyear by defining variables.

#include<stdio.h>
#include<stdlib.h>
int main()
{
int CurrentYear;
int Age;
//int BirthYear;
printf("The current year is:");
scanf("%d", &CurrentYear);
printf("Your age is:");
scanf("%d", &Age);
printf("Your Birth Year is:%d", CurrentYear-Age);
/*
BirthYear=CurrentYear-Age;
printf("Your Birth Year is:%d", BirthYear);
*/
return 0;
}
