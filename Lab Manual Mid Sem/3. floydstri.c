#include <stdio.h>
#include <conio.h>

int main()
{
    int n = 0;
    int count = 1;

    printf("\n Enter the no.of lines to be printed : ");
    scanf("%d",&n);

    //First loop is for determning the current line
    for(int i = 1 ; i <= n ; i++)
    {
        //once the number(s) for a line are printed, a new line is defined
        printf("\n ");

        //second loop would determine the number to be printed
        for(int j = 1; j <= i; j++,count++)
            printf(" %2d ",count);
        
    }
    
    return 0;
}