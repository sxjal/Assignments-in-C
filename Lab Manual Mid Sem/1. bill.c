    #include <stdio.h>
    #include <conio.h>

    int func(char item[][25], int j)
    {   
        int size = 0;
        for(int i = 0; item[j][i] != '\0' ; i++)
            size++;

        return size;
    }

    int main()
    {
        char item[50][25] = {'\0'};
        int quantity[50] = {0};
        int price[50] = {0};
        int n = 0,total = 0;

        for(int i = 0; i < 50 ; i++)
        {
            printf("\n Enter Item : ");
            scanf("%s",item[i]);

            printf("\n Enter Quantity : ");
            scanf("%d", &quantity[i]);

            printf("\n Enter Price Per Piece : ");
            scanf("%d", &price[i]);

            printf("\n Do you wawnt to enter more items?");
            printf("\n You can add a maximum of 50 items. Enter 1/0 : ");
            scanf("%d", &n);

            if(n == 1) continue;
            else break;
        }

        printf("ITEM               QUANTITY       PRICE        AMOUNT");
        printf("\n------------------------------------------------------------");
        for(int i = 0 ; quantity[i] != '\0' ; i++)
        {
            int curr_amt = quantity[i] * price[i];
            total += curr_amt;
            int size = func(item,i);
            printf("\n%s %*d %13d %13d",item[i],23-size,quantity[i],price[i],curr_amt);
        }
        printf("\n------------------------------------------------------------");
        printf("\n Total Amount to be Paid : %d/-",total);
        printf("\n------------------------------------------------------------");
        return 0;
    }






        