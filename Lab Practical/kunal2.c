#include <stdio.h>
#include <conio.h>

int main()
{
    int n = -1, pos = 0 ,neg = 0;

    while(n != 0)
    {
        printf("\n Enter number : ");
        scanf("%d", &n);

        if(n>0)
            if(n>pos)
                pos = n;

        if(n < 0)
            if(n<neg)
                neg = n;        
    }

    printf("\n Positive : %d, Negative : %d.",pos,neg);
    return 0;

}