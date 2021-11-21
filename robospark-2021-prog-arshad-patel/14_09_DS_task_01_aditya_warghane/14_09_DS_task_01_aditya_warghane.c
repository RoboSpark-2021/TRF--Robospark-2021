#include <stdio.h>
int customers;
struct bank 
{
        int acc_no;
        int bal;                                        // formation of structure
        char name[];
}accounts[10];

void withdraw()                                         //function to withdraw which takes account number and amount as input 
                                                        // and deducts that amount if enough balance is there
{
    int number,withdraw_amt,i;
    
    printf("Enter Account number:- ");
    scanf("%d",&number);
    printf("Enter Amount to be withdrawn:- ");
    scanf("%d",&withdraw_amt);
    for(i=1;i<=customers;i++)
    {
        if(number==accounts[i].acc_no)
        {   if(withdraw_amt<accounts[i].bal)
            
            {accounts[i].bal-=withdraw_amt;
            printf("Transaction sucessful\n");
            printf("Remaining balance is %d",accounts[i].bal);}
            else{printf("Insufficient funds\n\n");}
        }
    }
    next();

}
void deposit()                                              //function to deposit money into given account and print updated balance
{
    int number,depo_amt,i;
    
    printf("Enter Account number:- ");
    scanf("%d",&number);
    printf("Enter Amount to deposit:- ");
    scanf("%d",&depo_amt);
    for(i=1;i<=customers;i++)
    {
        if(number==accounts[i].acc_no)
        {
            accounts[i].bal+=depo_amt;
            printf("Deposit sucessful\n");
            printf("New balance is %d\n\n",accounts[i].bal);
        }
      
    }
    next();
}




void low()                                                   //function to display accounts which have balance less than 100
{
    for(int i=1;i<=customers;i++)
    {   
        if (accounts[i].bal < 100)
        {
            printf("Account Number---%d",accounts[i].acc_no);
            printf("\nBalance-----%d\n\n",accounts[i].bal);
        }
        else{printf("No such accounts!");}
    }
    next();
}

void next()                                                 //function to display menu and direct to specific functions 
                                                            // with the help of switch 
{   
    int key;
    printf("\n0---------Withdraw\n");
    printf("1---------Deposit\n");
    printf("2---------View accounts with less balance\n");
    printf("3---------Exit\n");
    
    scanf("%d",&key);
    
    switch(key)
    {
        case 0:
        withdraw();
        break;
        case 1:
        deposit();
        break;
        case 2:
        low();
        break;
        case 3:
        return 0;
        
    }
    
}

int main()
{   
    
    printf("Enter number of customers(<=10):-  ");                  // Enter (max 10) customers
    scanf("%d",&customers);
    printf("Enter Customer Details\n\n");                           // enter details of each customer
    for(int i=1;i<=customers;i++)
    {
        printf("\tFor Customer %d:\n",i);
        printf("\t\tEnter Account Number:- ");
        scanf("%d",&accounts[i].acc_no);
        printf("\n\t\tEnter Name:-  ");
        scanf("%s",&accounts[i].name);
        printf("\n\t\tEnter Balance:-  ");
        scanf("%d",&accounts[i].bal);
        printf("\n\n"); 
    }
    next(); 

    return 0;
}
