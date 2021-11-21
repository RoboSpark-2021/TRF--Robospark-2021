// A.
// Create a structure to specify data of customers in a bank. The data to be stored is: Account number, name and balance in account. Assume maximum of 10 customers in the bank.
// a. Write a function to print the Account number and name of each customer with balance below Rs. 100.
// b. If a customer requests for withdrawal or deposit, it is given in the form:
//         Name, Account No., updated amount, amount withdrawn/deposited, code (1 for deposit, 0 for withdrawal)
//         Also program to give a message "The balance is insufficient for the specified withdrawal." if transaction is not     possible.
// The program should be menu driven, functional and without code redundancy.

#include<stdio.h>
#include<string.h>
#define MAX 10
struct customer
{
    int accNo;
    char name[20];
    float bal;
}cust[MAX];

void printBelowThan100()
{
    printf("\nAccount Number\t\tName\t\tBalance\n\n");
    for (int i = 0; i < MAX; i++)
    {
        if(cust[i].bal < 100 && cust[i].accNo != 0)
            printf("%d\t\t\t%s\t\t%f\n", cust[i].accNo,cust[i].name,cust[i].bal);
    }
}

void withdrawBal()
{
    int accNo,flag = 0,i;
    float amount;
    printf("\n\nEnter account number:");
    scanf("%d",&accNo);
    printf("\nEnter amount:");
    scanf("%f",&amount);

    for(i = 0; i < MAX ; i++)
    {
        if (accNo == cust[i].accNo)
        {
            flag++;
            break;
        }
    }
    if (flag == 0)
    {
        printf("\n\nAccount does not exist");
        return;
    }
    if ( amount > cust[i].bal )
    {
        printf("\n\nInsufficient Balance");
    }
    else
    {
        cust[i].bal = cust[i].bal - amount;
        printf("\n\nAmount withdrawed successfully\nUpdated Balance is %f", cust[i].bal);
    }
}

void depositBal()
{
    int accNo,flag = 0,i;
    float amount;
    printf("\n\nEnter account number:");
    scanf("%d",&accNo);
    printf("\nEnter amount:");
    scanf("%f",&amount);

    for(i = 0; i < MAX ; i++)
    {
        if (accNo == cust[i].accNo)
        {
            flag++;
            break;
        }
    }
    if (flag == 0)
    {
        printf("\n\nAccount does not exist");
        return;
    }
    cust[i].bal += amount;
    printf("\n\nAmount deposited successfully\nUpdated Balance is %f", cust[i].bal);
}
void printAll()
{
    printf("\nAccount Number\t\tName\t\tBalance\n\n");
    for (int i = 0; i < MAX; i++)
    {
        if(cust[i].accNo != 0)
            printf("%d\t\t\t%s\t\t%f\n", cust[i].accNo,cust[i].name,cust[i].bal);
    }

}

int main()
{
    // hard coded data
    cust[0].accNo = 121;
    strcpy(cust[0].name,"Gaurav");
    cust[0].bal = 1000.0;

    cust[1].accNo = 122;
    strcpy(cust[1].name,"Abhishek");
    cust[1].bal = 7000.0;

    cust[2].accNo = 123;
    strcpy(cust[2].name,"Shubhayu");
    cust[2].bal = 70.0;

    cust[3].accNo = 124;
    strcpy(cust[3].name,"Prathmesh");
    cust[3].bal = 50.0;

    int ch;
    while (1)
    {
    
        printf("\n\n0. Withdraw money\n1. Deposit Money\n2. Print whole database\n3. Print accounts with balance below Rs. 100.\n4. Exit\nEnter your choice : ");
        scanf("%d",&ch);

        switch (ch)
        {
            case 0: withdrawBal();break;
            case 1: depositBal();break;
            case 2: printAll();break;
            case 3: printBelowThan100();break;
            case 4: exit(0);
            default: printf("\n\nInvalid Choice");break;
        }
    }
}