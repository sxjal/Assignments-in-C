#include <stdio.h>
#include <conio.h>

int main()
{
    int n = 0, sum = 0;

    while(1)
    {
        printf("\n Enter Number : ");
        scanf("%d",&n);

        if(n != 0) break;
        else   
        {
            printf("\n 0 is cannot be a perfect number. Please try entering another number.");
            continue;
        }
    }
    
    for(int i = 1; i <= n/2 ; i++)
        if(n % i == 0)
            sum += i;
    
    if(sum == n)
        printf("\n %d is a perfect number.",n);
    
    else    
        printf("\n %d is not a perfect number.",n);

    return 0;
}