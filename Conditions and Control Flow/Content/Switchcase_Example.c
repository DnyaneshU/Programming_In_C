#include<stdio.h>
#include<stdlib.h>
int main()
{
    char Grade;
    printf("Enter your grade(A-F):");
    scanf("%c",&Grade);
    switch(Grade)
    {//these paranthesis are used to specify the properties inside the switchcase.
     case 'A':
     printf("Your grade is bwtween 90-100\n");
     break;//this is used to signify if our condition is satisfied then there is no need to check in with the other cases and simply move on  
     case 'B':
     printf("Your grade is bwtween 80-90\n");
     break;
     case 'C':
     printf("Your grade is bwtween 70-80\n");
     break;
     case 'D':
     printf("Your grade is bwtween 60-70\n");
     break;
     case 'E':
     printf("Your grade is bwtween 50-60\n");
     break;
     case 'F':
     printf("Your have failed this exam\n");
     break;
    default://this is not compulsary to write but is given if incase none of the given options match with that in the switchcase
    printf("Try again");
    break;
    }
return 0;
}
