    #include <stdio.h>
    #include <conio.h>

    int F(int n, int r)
    {
        if(r == 0 || n == r)
            return 1;

        return (F(n-1,r) + F(n-1, r-1));
    }
    int main()
    {
        int n = 1,r = 1;
        printf("\n Enter the values of n & r : ");
        scanf("%d%d",&n,&r);
        
        printf("\n %dC%d : %d",n,r,F(n,r));

        return 0;
    }