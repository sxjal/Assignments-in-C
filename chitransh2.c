//Write a program that reads the grades of three students in the lab part and
//their grades in the theory part. The final grade is calculated as: lab_grd*0.3 +
//theory_ grd*0.7. The program should display how many students got a grade
//between 8 and 10. Don’t use more than three variables. 


#include <stdio.h>

int main () 
{
    int count = 0;
    int lab, theory;
    
    // NOTE: Assuming that grade can not exceed 10

    printf("Enter lab and theory grade for student 1: ");
    scanf("%d %d", &lab, &theory);
    if (lab * 0.3 + theory * 0.7 >= 8) count++;
    
    printf("Enter lab and theory grade for student 2: ");
    scanf("%d %d", &lab, &theory);
    if (lab * 0.3 + theory * 0.7 >= 8) count++;

    printf("Enter lab and theory grade for student 3: ");
    scanf("%d %d", &lab, &theory);
    if (lab * 0.3 + theory * 0.7 >= 8) count++;

    printf("%d students got grade between 8 and 10.\n", count);

    return 0;
}
