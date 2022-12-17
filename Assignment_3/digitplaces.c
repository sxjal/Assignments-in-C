#include <stdio.h>
#include <conio.h>

int main()
{
    int n,h,t,u;
    printf("Enter a three digit number : ");
    scanf("%d",&n);

    u=n%10;
    t=(n/10)%10;
    h=(n/100)%10;

    printf("Hundreds = %d , Tens = %d , Units = %d\n",h*100,t*10,u);
    return 0;
}