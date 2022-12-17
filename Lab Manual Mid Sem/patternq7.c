#include <stdio.h>
#include <conio.h>

int modulo2(int n)
{
    if(n % 2 == 0) return 1;
    return 0;
}

int checkequal(int n, int x)
{
    if(n == x)
        return 1;
    return 0;
}
int main()
{
    for(int i=1; i<=5; i++)
    {
        printf("\n");
        
        for(int j=1; j<=5; j++)
        {            
            if(checkequal(i,j))
                printf(" $ ");
            
            else if(modulo2(i) && modulo2(j))
                printf(" $ ");
            
            else if( (checkequal(i,1) && checkequal(j,5)) || (checkequal(i,5) && checkequal(j,1)) )
                printf(" $ ");
            
            else if(modulo2(i) && checkequal(j,3))
                printf("   ");
                        
            else if(modulo2(j) && checkequal(i,3))
                printf("   ");

            else printf(" * ");
                
        }
    }
    return 0;
}