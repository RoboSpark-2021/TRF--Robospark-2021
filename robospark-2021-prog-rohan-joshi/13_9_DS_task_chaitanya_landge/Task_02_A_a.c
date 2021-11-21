#include<stdio.h>
#include<string.h>
struct bank
{
    int balance;
    int acc_no;
    char name[20];
};

void balance_filter(struct bank details[10]);

int main()
{
    struct bank details[10];

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
    strcpy(details[4].name,"Aayush");

    printf("The people having balance below 100 are as follows:\n");
    balance_filter(details);

    return 0;
}
void balance_filter(struct bank details[10])
{

    for (int i = 0; i < 5; i++)
    {
        if (details[i].balance <=100){
            printf("Account Number:%d\n",details[i].acc_no);
            printf("Name: %s\n\n",details[i].name);
        }
    }
    


}