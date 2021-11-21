/*
Kartik Rajput
Task 2 Date-13-09-2021
A.
Create a structure to specify data of customers in a bank. The data to be stored is: Account number, name and balance in account. Assume maximum of 10 customers in the bank.
a. Write a function to print the Account number and name of each customer with balance below Rs. 100.
b. If a customer requests for withdrawal or deposit, it is given in the form:
        Name, Account No., updated amount, amount withdrawn/deposited, code (1 for deposit, 0 for withdrawal)
        Also program to give a message "The balance is insufficient for the specified withdrawal." if transaction is not     possible.
*/

#include<stdio.h>
#include<string.h>

struct custdata
{
   int acno;
   char name[50];
   int balance;
}CD[9];

void print_acno_name(struct custdata[]);
int withdep(struct custdata[], int i);

void main(){
int sel;
for (int i=0;i<7;i++)
{
    CD[i].acno=12010+i;
    CD[i].balance=i*30;
}
strcpy(CD[0].name,"ABC");
strcpy(CD[1].name,"BCD");
strcpy(CD[2].name,"CDE");
strcpy(CD[3].name,"DEF");
strcpy(CD[4].name,"EFG");
strcpy(CD[5].name,"FGH");
strcpy(CD[6].name,"GHI");

do{printf("\nPress 1 to print details of customers with balance below Rs. 100\nPress 2 to Withdraw or Deposit Money\nPress 0 to Exit\nEnter Selection : ");
scanf("%d",&sel);
switch(sel)
{
case 1:
    print_acno_name(CD);
    break;
case 2:
    printf("Enter Account No. : ");
int acc, a=0;
scanf("%d",&acc);
for (int i=0;i<7;i++)
{
    if(acc==CD[i].acno)
    {
        printf("Enter your Name : ");
        char n[50];
        scanf("%s",n);
        if(strcmp(n, CD[i].name)==0)
        {
        CD[i].balance= withdep(CD, i);}
        else
        {
            printf("name did'nt match");
        }
        a++;
    }
    }
    if (a!=1)
        printf("Invalid details");
    break;
}}while(sel!=0);
}

void print_acno_name(struct custdata CD[])
{
printf("Account number and name of customers with balance below Rs. 100\n\n");
for (int i=0;i<7;i++)
{
    if (CD[i].balance<100)
    {
        printf("Account Number = %d, Name = %s\n",CD[i].acno,CD[i].name);
    }
}
}

int withdep(struct custdata CD[], int i)
{
            printf("Current account balance : %d\n",CD[i].balance);
            printf("Press 0 for Withdrawal\nPress 1 for Deposit\nEnter Selection : ");
            int s;
            scanf("%d",&s);
            printf("Enter ammount : ");
            int am;
            scanf("%d",&am);
            if (s == 0)
            {
                if(am<=CD[i].balance)
                {
                    CD[i].balance-=am;
                    printf("Name = %s, Account No. = %d, updated amount = %d, amount withdrawn/deposited = %d",CD[i].name,CD[i].acno,CD[i].balance,am);
                }
                else
                    printf("Account balance insufficient");
            }
            else if (s==1)
            {
                CD[i].balance+=am;
                printf("Name = %s, Account No. = %d, updated amount = %d, amount withdrawn/deposited = %d",CD[i].name,CD[i].acno,CD[i].balance,am);
            }
            else
                printf("Invalid Selection");
            return CD[i].balance;
}

