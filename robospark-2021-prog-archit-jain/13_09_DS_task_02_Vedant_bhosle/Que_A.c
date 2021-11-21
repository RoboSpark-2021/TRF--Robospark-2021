#include<stdio.h>
struct bank
{
    int account_num;
    char name[100];
    int amount;
}a[5];
void less_balance(struct bank a[10],int n){
    int i;
    printf("The account holders whose balace is less than 100 are:\n");
    for (i = 1; i <=n; i++)
    {
        if (a[i].amount<100)
        {
            printf("The account number is: %d\n",a[i].account_num);
            printf("Account holder: %s\n", a[i].name);
        } 
    }  
};
void depo_withdraw()
{
    int i;
    int choice;
    int add_amt;
    printf("What do you want to do?\nPress 0 for withdrawal\nPress 1 for Deposit\n");
    scanf("%d",&choice);
    //Code for withdrawal
    if (choice ==0)
    {
        printf("Enter your account number: ");
        scanf("%d",&i);
        printf("Enter the amount you want to withdraw: ");
        scanf("%d",&add_amt);
        a[i].amount = a[i].amount-add_amt;
        if (a[i].amount<0)
        {
            printf("You don't have enough balance to do this transaction\n");
        }
        else
        {
            printf("Withdrawal Successful!\n");
            printf("Your current balance is now: %d",a[i].amount);
        }
    }
    if (choice == 1)
    {
        printf("Enter your account number: ");
        scanf("%d",&i);
        printf("Enter the amount you want to deposit: ");
        scanf("%d",&add_amt);
        a[i].amount=a[i].amount+add_amt;
        printf("Transaction Succesful!\n");
        printf("Your current balance is now: %d",a[i].amount);
    }
    
};
int main()
{
    int i;
    printf("Welcome!\n");
    for (i = 1; i <=5; i++)
    {
        printf("Enter the details about customer %d\n", i);
        a[i].account_num = i;
        printf("Your account number is: %d\n",a[i].account_num);
        printf("Please enter your name: ");
        scanf("%s", a[i].name);
        printf("Enter the balance     : ");
        scanf("%d", &a[i].amount);
    }
    less_balance(a,5);
    depo_withdraw();
    return 0;
}