#include <stdio.h>
#include <conio.h>


void swap(int x, int y)
{
    int temp;
    
    temp = x;
    x = y;
    y = temp;

    printf("\n Values after swapping");
    printf("\n A : %d", x);
    printf("\n B : %d", y);

}
int main()
{
    int a = 10,b = 20;
    
    printf("Values before swapping");
    printf("\n A : %d", a);
    printf("\n B : %d", b);

    swap(a,b);
    
    return 0;
    
}




