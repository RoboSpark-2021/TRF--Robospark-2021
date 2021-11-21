#include<stdio.h>
struct acc_det{
    int Account_no;
    char name[50];
    int balance;
}cust[10];

void Below_100(struct acc_det cust[]){
    printf("The Account number and name of each customer with balance below Rs. 100 are as follows -\n");
     for(int i=0;i<10;i++){
        if(cust[i].balance<100){
        printf("Account No.  %d ",cust[i].Account_no);
        printf("\n Name is - %s \n",cust[i].name);
        }
    }
}
void withdrawal(struct acc_det cust[]){
    int acc;
    printf("Enter the Acccount Number: ");
    scanf("%d",&acc);
    for(int i=0;i<10;i++){
        if(cust[i].Account_no==acc){
            int withdraw ;
            printf("Enter the amount to withdraw: ");
            scanf("%d",&withdraw );
            if(withdraw >cust[i].balance){
                printf("The balance is insufficient for the specified withdrawal\n");
            }
            else{
                cust[i].balance-=withdraw ;
                printf("Name: %s\nAccount Number: %d\n",cust[i].name,cust[i].Account_no);
                printf("Amount Withdrawn: %d\nCurrent Balance: %d\n",withdraw ,cust[i].balance);
            }
        }
    }

}
void deposit(struct acc_det cust[]){
    int acc;
    printf("Enter the Acccount Number: ");
    scanf("%d",&acc);
    for(int i=0;i<10;i++){
        if(cust[i].Account_no==acc){
            int dep;
            printf("Enter the amount to deposit: ");
            scanf("%d",&dep);
            cust[i].balance+=dep;
            printf("Name: %s\nAccount Number: %d\n",cust[i].name,cust[i].Account_no);
            printf("Amount Deposited: %d \nCurrent balance: %d\n",dep,cust[i].balance);
        }
    }
}

int main()
{
printf("-----Welcome to HSBA Bank-----\n");
    for(int i=0;i<10;i++){
        printf("\n---Enter Accounts Data---\n");
        printf("Enter Account Number: ");
        scanf("%d",&cust[i].Account_no);
        printf("Enter Name: ");
        scanf("%s",cust[i].name);
        printf("Enter Balance: ");
        scanf("%d",&cust[i].balance);
    }
    int code;
    do{
    printf("\nPress 1 for Withdrawal \nPress 2 for Deposit\nPress 3 for Details of account having less than INR 100 \nPress 4 for Exit\n");
    scanf("%d",&code);

    switch(code){
        case 1: {
            withdrawal(cust);
            break;
        }
        case 2: {
            deposit(cust);
            break;
        }
        case 3: {
            Below_100(cust);
            break;
        }
        case 4: ;
            break;
        default:
            printf("Invalid Input, Please try again");
    }
    }
    while(code!=4);
    printf("\n---Thank you for using our services---\n");
 return 0;
    
}