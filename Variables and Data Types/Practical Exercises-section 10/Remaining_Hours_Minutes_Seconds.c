//5. Calculate the remaining part of the time.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    //test case:4000 seconds
    int seconds;
    int hours, minutes, RemainingSeconds;
    printf("Enter the number of seconds:");
    scanf("%d", &seconds);
    hours = seconds / 3600;
    minutes = (seconds - (hours * 3600)) / 60;
    RemainingSeconds = seconds % 60;
    printf("\n%d Hour(s) \t%d Minute(s)\t%d Second(s)", hours, minutes, RemainingSeconds);
    return 0;
}
