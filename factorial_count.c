#include<stdio.h>

int factorial(int n,int *count)
{
    
    if(n==0 || n==1){
       return 1;
    }
    else{
        (*count)++;
        return n*factorial(n-1,count);
    }
}

int main()

{
    int n, count = 0;
    
    printf("Enter Number ");
    scanf("%d",&n);
    printf("Factorial of given number is %d",factorial(n, &count));
    printf("\nFunction is counted %d times",count);

    return 0;
}
