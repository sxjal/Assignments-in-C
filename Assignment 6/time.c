#include <stdio.h>
#include <conio.h>

int main()
{
    int hour1 = 0, minute1 = 0;
    int hour2 = 0, minute2 = 0;

    printf("\n Enter first time : ");
    scanf("%d%d",&hour1,&minute1);
    
    printf("\n Enter Second time : ");
    scanf("%d%d",&hour2,&minute2);

    int hour_diff;
    int minute_diff;

    while(minute2 > minute1)
    {
        hour1 -= 1;
        minute1 += 60;
    }

    minute_diff = minute1 - minute2;
    hour_diff = hour1 - hour2;

    printf("\n Diff. Hour : %d, & minute : %d", hour_diff, minute_diff);

    return 0;
}



