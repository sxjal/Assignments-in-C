#include <stdio.h>
#include <conio.h>
#include <string.h>
#define some 50

int func(char item[])
{   
    int size = 0;
    for(int i = 0; item[i] != '\0' ; i++)
        size++;

    return size;
}

int main()
{
    char item[50] = {'\0'};
    int quantity = 0;
    int price = 0;
    int n = 0,total = 0;
    int flag = 1;

    printf("\n When asked to 'Enter' fill the data in the sequence. Item > Quanitity > Price.");
    printf("\n Enter 1/0 for yes or no to add more items respectively.");
    
    printf("\n%*cITEM               QUANTITY       PRICE        AMOUNT",some,'.');
    printf("\n%*c------------------------------------------------------------",some,'-');
    
    while(1)
    {
        printf("\n Enter: ");

        scanf("%s",item);
        scanf("%d%d", &quantity, &price);

        int curr_amt = quantity * price;
        total += curr_amt; 

        int size = func(item);
        printf("%*s %*d %13d %13d",some+5,item,23-size,quantity,price,curr_amt);
        
        printf("                   1/0 : ");
        scanf("%d", &flag);

        if(flag == 1) continue;
        else break;
    }

    printf("\n%*c------------------------------------------------------------",some,'-');
    printf("\n%*cotal Amount to be Paid : %d/-",some,'T',total);
    printf("\n%*c------------------------------------------------------------",some,'-');
    return 0;
}






    