//A Write a program to sum the series '1/2+2/3+.......n/(n+1)'


#include <stdio.h>
#include <conio.h>                                        

int main()
{
    int n = 0;
    
    printf("\n Enter N : ");
    scanf("%d",&n);

    float sum = 0;
    for(float i = 1; i <= n; i++)
       sum += (i/(i+1));  

    printf("\n Answer : %f",sum);
    return 0;
}