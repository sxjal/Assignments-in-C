    #include<stdio.h>
    #include<conio.h>

    int main()
    {
        int choice = 0;
        
        printf("\n Enter Choice from 1 to 7 : ");
        scanf("%d", &choice);

        switch(choice){

            case 1 : 
                printf("\n Monday");
                break;
            case 2 : 
                printf("\n Tuesday");
                break;
            case 3 : 
                printf("\n Wednesday");
                break;
            case 4 : 
                printf("\n Thursday");
                break;
            case 5 : 
                printf("\n Friday");
                break;
            case 6 : 
                printf("\n Saturday");
                break;
            case 7 : 
                printf("\n Sunday");
                break;

            default : 
                printf("\n No such choice available.");  
        }

        return 0;
    }

