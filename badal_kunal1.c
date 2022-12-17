#include <stdio.h>
#include <conio.h>


int main()
{
    float use = 0;
    float cost = 0;
    float amount = 0;

    printf("\n Enter usage in cubic meteres : ");
    scanf("%f",&use);
    float remaining;
    
    if(use>=30)
    {
        remaining = use-30;
        amount = 10 + ((30)  * 0.6));
    }
    if(use >= 30 && use <= 50)
    {
        amount = 10 ;
    }

    if(remaining >= 20 && remaining >= 30)
    {
            remaining -= 20;
        amount += 20*0.8;
    }
    else if(remaining >= 10 && remaining >= 30)
    {
        remaining -= 10;
        amount += 20*1.0;
    }
    else if(remaining >= 0 && remaining >= 30)
    {
        remaining -= 20;
        amount += 20*1.2;
    }
    else break;


}