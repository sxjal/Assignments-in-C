#include <stdio.h>
#include <conio.h>

//function to check if the number is a power of 2
int checkpower2(int n)
{
    //the given condition
    if(n != 0 && ( n&(n-1) == 0) )
        return 1;

    return 0;
}

int main()
{
    int number = 0;
    int flag = 1;

    //while loop which runs infinitely untill flag is 0
    while(flag)
    {   
        printf("\n Enter Number : ");
        scanf("%d", &number);

        if(checkpower2(number))
            printf("\n The given number is a power of two.");
        else   
            printf("\n The given number is not a power of two.");

        //users choice if they want to recheck another number
        printf("\n Do you want to check another number?");
        printf("\n Enter 1 for yes and 0 for no : ");
        scanf("%d", &flag);
    }
               
    
    return 0;
}