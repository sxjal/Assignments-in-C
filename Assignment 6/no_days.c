#include <stdio.h>
#include <conio.h>

//function to check if a leap year is entered
int leapyear(int year)
{

    if(year % 400 == 0 || year % 4 == 0 )
        return 1;

    else return 0;
}

int main()
{
    int month, year;

    scanf("%d %d",&month, &year);

    if(leapyear(year) && month == 2)
        printf("\n No. of days in month  %d, and year %d are : %d",month,year,29);
    
    else if(month == 2) 
        printf("\n No. of days in month  %d, and year %d are : %d",month,year,28);
    
    else if(month % 2 == 0 || month == 7) //for the month of july, a seperate condition is given
        printf("\n No. of days in month  %d, and year  %d are : %d",month,year,31);
    
    else printf("\n No. of days in month  %d, and year  %d are : %d",month,year,30);
    
    return 0;
}




