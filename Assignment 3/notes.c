#include<stdio.h>
#include<conio.h>

int main()
{
    int amt;
    int notereq[8] = {0};
    int notevalue[8] = {500,100,50,20,10,5,2,1};
    
    printf("\n Enter Amount : ");
    scanf("%d",&amt);

    for(int i = 0; i < 8 ; i++)
    {
        if(amt >= notevalue[i])
        {
            notereq[i] = amt / notevalue[i];
            amt -= notereq[i] * notevalue[i];
        }
    }
    for(int i = 0 ; i < 8 ; i++)
    {
        if(notereq[i] != 0)
            printf("\n No.of %d : %d", notevalue[i],notereq[i]);
    }
    return 0;
}

