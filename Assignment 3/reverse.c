#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    int rev = 0;

    printf("\nEnter Number : ");
    scanf("%d",&n);

    while(n > 0)
    {
        rev *= 10;
        rev += n % 10;
        n /= 10;
    }

    printf("\n Reverse : %d", rev);
    return 0;
}






