#include <stdio.h>

int main(){
    int product_val=0;
    FILE *fp;

    fp=fopen("one.txt","a");
    if(fp==NULL)
    {
        printf("error opening file \n ");

    }
    printf("Enter product value\n");

    while(1)
    {
        scanf("%d",&product_val);
        if(product_val == -1) break;
        else if( (product_val> (10) ) && (product_val<(20) )  )
        {
            fprintf(fp, "%f", product_val);
        }

    }
    fclose(fp);
    return 0;
}








