/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    // test case: 137 and 143
    int a,b,c;
    printf("Enter3 numbers of you choice:\n");
    scanf("%d%d%d", &a,&b,&c);
    if(c>b && b>a)
    printf("The numbers entered are ascending.");
    else
    printf("The numbers entered are not ascending.");
    return 0;
}*/

#include <stdio.h>

int main()
{
	int num;
	int units, tens, hundreds;
	printf("Enter a 3-digit num: ");
	scanf("%d", &num);

	units = num % 10;
	tens = (num / 10) % 10;
	hundreds = num / 100;

	if (hundreds < tens && tens < units)
		printf("ASCENDING\n");
	else 
		printf("NOT ASCENDING\n");

	return 0;
}