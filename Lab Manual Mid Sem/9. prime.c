#include <stdio.h>
#include <conio.h>

int isprime(int number)
{
    if(number == 0) return 0;

    for(int i = 2; i < number; i++)
        if(number % i == 0)
            return 0;
    
    return 1;

}
int main()
{
    int n = 0;

    printf("\n Enter Number : ");
    scanf("%d",&n);    
    

    if(isprime(n))
        printf("\n %d is a prime number.",n);
    
    else 
        printf("\n %d is not a prime number.",n);
    
    return 0;
}