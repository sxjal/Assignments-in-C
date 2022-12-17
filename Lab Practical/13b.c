//B) Write a C program using pointers to compute the mean, median, mode, and range
//for taking 6 numbers from user

#include <stdio.h>
#include <conio.h>

int main()
{
    int mode = 0 , range = 0;
    float  mean = 0, median = 0;
    int value[6] = {0};

    int *ptr;
    ptr = &value[0];
    for(int i = 0 ; i < 6 ; i++,*(ptr++))
    {       

        printf("\n Enter Value %d : ",i+1);
        scanf("%d",&value[i]);

        mean += *ptr;

        if(i == 2 || i == 3)
        {
            median += *ptr;
        }    
    }

    mean /= 6;
    median /= 2;
    range = value[5] - value[0];

    int count = 1;
    int maxcount = 0;
    for(int i = 0; i < 6; i++)   
    {
        
        for(int j = i+1 ; j < 6; j++) 
        {
            if(value[j] == value[i])
            {
                count++; 

                if(count > maxcount)
                {
                    mode = value[j];
                }
            }
        }
    }

    printf("\n Mean : %.2f  ",mean);
    printf("\n Median : %.2f  ",median);
    printf("\n Mode : %d  ",mode);
    printf("\n Range : %d ",range);
    
    return 0;
}