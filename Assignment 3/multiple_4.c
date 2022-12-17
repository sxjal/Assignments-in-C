#include<stdio.h>
#include<conio.h>

int main()
{
    int n, i = 1;
    printf("\n Enter number : ");
    scanf("%d", &n);
    
    while(i <= n)
    {
        printf("\n %d", i * 4);
        i++;
    }
    return 0;

}


