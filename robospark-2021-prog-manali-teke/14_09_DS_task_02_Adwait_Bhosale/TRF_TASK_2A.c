#include<stdio.h>

struct customer 
{
    char name[50];
    int accountNo;
    int balance;
}s[10];

void printdetails(){

for (int i = 0; i < 3; i++)
{
   printf("%s",s[i].name); 
   printf("%d",s[i].accountNo);
   printf("%d",s[i].balance);
   printf("\n-------------------------------\n");
}

}

int main(int argc, char const *argv[])
{

for (int i = 0; i < 3; i++)
{
    printf("Enter the Name : \n");
    scanf("%s",s[i].name);

    printf("Enter the account no :\n");
    scanf("%d",&s[i].accountNo);

    printf("Enter the your acc balance: \n");
    scanf("%d",&s[i].balance);

    if (s[i].balance<100){
        printf("Your balance is less than 100.\n");
    }

printf("\n--------------\n");

}
printf("#####  This is the data of all customers  #####");
printdetails();
    return 0;
}
