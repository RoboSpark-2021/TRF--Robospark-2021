#include<stdio.h>
#define MAX 5

struct details{
    int A_Num;
    char name[10];
    int balance;
}arr[MAX];  // Structure

// Function to be used
void sortBalance();
void transaction();
void main()
{  // Processing account details
    printf("Account Info \n");

    for(int i=0;i<MAX;i++)
    {
        printf("\n Enter Account Details");
        printf("\n Name:");
        scanf("%s",&arr[i].name);

        printf("\n A_Num:");
        scanf("%d",&arr[i].A_Num);

        printf("\n Balance:");
        scanf("%d",&arr[i].balance);

    }
sortBalance(); // for q1
transaction();// for q2


}
void sortBalance(){

printf("\n Accounts which have balance less than 100 :-");

for(int i=0;i<MAX;i++)
{
    if(arr[i].balance<100)
    {
        printf("\n Name-->%s   AccountNumber-->%d    Balance-->%d",arr[i].name,arr[i].A_Num,arr[i].balance);

    }
}

}

void transaction(){
    int opt, acc,loop=1,loop2=1,flag=1,trans;
// opt used in switch acc is account number loop and loop2 are used to return instructions if input is wrong
// trans variable for money deposited or withdrawn
printf("\n Transaction Procedure");
while(loop)
{
printf("\n Enter Account number");  // Credentials Check
printf("\nAccount Number:");
scanf("%d",&acc);

for(int i=0;i<MAX;i++)
{
    if(arr[i].A_Num==acc)
    {
flag=0;
loop=0;

while(loop2)
{

printf("\n Choose 0 for Withdraw and 1 for Deposit:");
scanf("%d",&opt);
switch(opt)
{
    case 0: // for withdraw
        printf("\n Account Details");
        printf("\nName    Account Number    Balance");
        printf("\n%s        %d                %d",arr[i].name,arr[i].A_Num,arr[i].balance);
        printf("\n Enter Amount to Withdraw: ");
        scanf("%d",&trans);
        trans<arr[i].balance ? arr[i].balance-=trans : printf("!!!Insufficient Balance for transaction");
        printf("\n Account Details");
        printf("\nName    Account Number    Balance");
        printf("\n%s        %d                %d",arr[i].name,arr[i].A_Num,arr[i].balance);
        loop2=0;
        break;
    case 1: // for deposit
        printf("\n Account Details");
        printf("\nName    Account Number    Balance");
        printf("\n%s        %d                %d",arr[i].name,arr[i].A_Num,arr[i].balance);
        printf("\nEnter Amount to Deposit: ");
        scanf("%d",&trans);
        arr[i].balance+=trans;
        printf("\n Updated Account Details");
        printf("\nName    Account Number    Balance");
        printf("\n%s        %d                %d",arr[i].name,arr[i].A_Num,arr[i].balance);
          loop2=0;
          break;
    default:
        printf("\n !!!Wrong Input!!!");

        }
}
}
}
if(flag) // if credentials are wrong
{
    printf("Wrong Input");
}
}
}
