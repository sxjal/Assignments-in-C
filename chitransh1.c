//Suppose that a customer in a store buys some things. If the total cost is
//less than $100, no discount is due; otherwise, a 5% is offered. Write a program
//that reads the total cost and displays the amount to be paid. 

#include <stdio.h>

int main () {
    double price, discount;

    printf("Enter the total amount of the purchase: ");
    scanf("%lf", &price);

    if (price <= 100.0)
        discount = 0.0;
        
    else 
        discount = 0.05 * price;
    

    printf("Discount: %.2lf\n", discount);
    printf("Total: %.2lf\n", price - discount);
}