#include<stdio.h>
#include<stdlib.h>
int main()
{
    int grade;
    printf("Enter the grade you recieved:");
    scanf("%d", &grade);
    if(grade>=80)
    printf("You have passed with an excelent score");
    else if (grade >= 60)
    printf("You have passed with a good score");
    else
    printf("Sorry! You did not pass");
     return 0;
}

