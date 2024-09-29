#include<stdio.h>
#include<stdlib.h>

int main() 
{
    int Year, Month, Date;
    int LeapYear = 0;

    printf("Enter the year:");
    scanf("%d", &Year);

    printf("Enter the month:");
    scanf("%d", &Month);

    printf("Enter the date:");
    scanf("%d", &Date);

    if (Month == 2) 
    {
        if (Year % 4 == 0) 
        {
            LeapYear = 1;
        }
    }

    Date++;
    switch (Month) 
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (Date > 31) 
            {
                Date = 1;
                Month++;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (Date > 30)
             {
                Date = 1;
                Month++;
            }
            break;
        case 2:
            if ((Date > 29 && LeapYear == 1) || (Date > 28 && LeapYear == 0))
            {
                Date = 1;
                Month++;
            }
            break;
        default:
            break;
    }

    if (Month > 12) 
    {
        Month = 1;
        Year++;
    }

    printf("The next day is: %d/%d/%d", Date, Month, Year);
    
    return 0;
}
