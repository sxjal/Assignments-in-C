#include <stdio.h>
#include <conio.h>

void function(int a,int d,int n)
{
    for(int i = 1; i <= n; i++)
    {
        int value = a + (i-1)*d;
        printf("%d, ",value);
    }
    printf("...");
}
    
int main()
{
    for(int i = 1; i <= 4 ; i++)
        printf("%d, ",i*i*i);
    
    printf("...");

    for(int i = 0; i < 3; i++)
    {
        int a,d,n;
        printf("\n Enter a,d & n : ");
        scanf("%d%d%d", &a,&d,&n);

        function(a,d,n);
    }

    return 0;
}
