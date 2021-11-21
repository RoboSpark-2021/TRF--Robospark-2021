#include<stdio.h>
#include<string.h>
struct bank
{
    int balance;
    int acc_no;
    char name[20];
};

// void balance_filter(struct bank details[10]);

int main()
{
    struct bank details[10];
    int a;

    details[0].acc_no=1;
    details[0].balance=150;
    strcpy(details[0].name,"Chaitanya");

    details[1].acc_no=2;
    details[1].balance=50;
    strcpy(details[1].name,"Salman");

    details[2].acc_no=3;
    details[2].balance=15;
    strcpy(details[2].name,"Aamir");

    details[3].acc_no=4;
    details[3].balance=200;
    strcpy(details[3].name,"Tiger");

    details[4].acc_no=5;
    details[4].balance=105;
    strcpy(details[4].name,"Ayush");
    while (a != 3)
    {
        /* code */
    
    
    printf("Choose the operation:\n");
    printf("1.Deposite money\n2.Withdraw Money\n3.Exit\n");
    scanf("%d", &a);
    int acc_no;
    char name[20];
    printf("Enter your details\n1.Account number\n");
    scanf("%d", &acc_no);
    printf("2.Name:");
    // gets(name);
    scanf("%s",name);
    int amt;
    switch (a)
    {
    case 1: 
        printf("Enter the money to be deposited");
        scanf("%d",&amt);
        details[acc_no-1].balance += amt;
        printf("Your new balance is %d", details[acc_no-1].balance);
        break;
    
    case 2:
        printf("Enter the money to be withdrawn: ");
        scanf("%d",&amt);

        if (details[acc_no-1].balance < amt){
            printf("The balance is insufficient for the specified withdrawal.\n");
            break;
        }else{
            details[acc_no-1].balance -= amt;
            printf("Money withdrawn succcessfull\nRemaining balance is %d\n",details[acc_no-1].balance);
        }
        break;
    
    case 3:
        break;
        
    default:
        printf("Please enter valid details");
        break;
    }

    }

    return 0;
}