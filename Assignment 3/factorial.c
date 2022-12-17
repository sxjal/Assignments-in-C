#include<stdio.h>
#include<conio.h>

int main()
{
    int n, fact = 1;

    printf("\n Enter Number : ");
    scanf("%d", &n);

    if(n != 0)
        while(n > 0){
            fact *= n;
            n--;
        }
    
    printf("\nFactorial : %d",fact);

    return 0;
}


