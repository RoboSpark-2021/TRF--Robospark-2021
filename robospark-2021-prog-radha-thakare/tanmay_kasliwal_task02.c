#include <stdio.h>
 struct bankk{
     int accountnum;
     char name[50];
     float balance;
 }bank[10]={
     100,"Ram",200,
     101,"Shyam",300,
     102,"Mohan",20,
     103,"Sam",50,
     104,"Tom",100,
 };
 void balance(){
     int i;
     for(i=0;i<=10;i++){
         if (bank[i].balance<100 && bank[i].balance>0){
             printf("Name:%s\n",bank[i].name);
             printf("Account Number:%d\n",bank[i].accountnum);
         }
     }

 }
 void request(int accountnum,int amount, int x){
     int i;
     for (i=0;i<10;i++){
         if (bank[i].accountnum==accountnum+1)
             break;
     }
     if (x==1){
         bank[i].balance+=amount;
         printf("Your new account balance is %d\n",bank[i].balance);
     }
     else{
         if (bank[i].balance-amount<0){
             printf("The balance is insufficient\n");
         }
         else{
             bank[i].balance-=amount;
             printf("Your new account balance is %d\n",bank[i].balance);
         }
     }
     
     
 }
     
 int main(){
     int name,accountnum,x,amount;
     printf("Enter account num\n");
     scanf("%d",&accountnum);
     printf("Enter 1 for deposit and 0 for withdrawal\n");
     scanf("%d",&x);

     if (x==1){
         printf("Enter the amount to be deposited\n");
         scanf("%d",&amount);
     }
     else{
         printf("Enter the amount of withdrawal\n");
         scanf("%d",&amount);
     }
     request(accountnum,amount,x);
     printf("Below 100 balance ");
     balance();













 }

