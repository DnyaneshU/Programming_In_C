#include<stdio.h>
#include<stdlib.h>
int main()
{
    int Seconds, Hours, Minutes, RemSeconds;
    printf("Enter the Seconds:\n");
    scanf("%d", &Seconds);

    Hours=Seconds/3600;
    if (Hours<10)
    printf("0");
    printf("%d:", Hours);

    Minutes=(Seconds-Hours*3600)/60;
    if(Minutes < 10)
    printf("0");
    printf( "%d:", Minutes);

    RemSeconds=Seconds % 60;
    if(RemSeconds<10)
    printf("0");
    printf( "%d", RemSeconds);

    return 0;
}