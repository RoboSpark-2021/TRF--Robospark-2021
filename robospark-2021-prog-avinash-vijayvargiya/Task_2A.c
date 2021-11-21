#include<stdio.h>
#include<conio.h>
#include<Windows.h>

/*Function to perform withdrawal or deposition*/
void action(int, int, int);

/*Print the balance below 100 Rs.*/
void below100();

struct acc_holder
{
	long int acc_num;
	char name[30];
	int bal;
} sbi[10] = { 1, "Sam", 1000,
2, "Aki", 1233044,
3, "Ria", 99,
4, "Ram", 33,
5, "Yug", 20000,
6, "Kat", 100,
7, "Jane", 12330,
8, "Sutton", 99,
9, "Richard", 330,
10, "Sara", 2000
};

int main()
{
	int accnum, amount, code,ent;
       while(ent!= 3){
       printf("Which one do you want to choose?\n");
       printf("\n1. for deposit/withdrawal \n2. for checking accounts whose balance are less than 100 \n3. for exit\n");
	scanf("%d", &ent);
	switch(ent)
	{
       case 1:
              printf("\nEnter your account number : ");
              scanf("%d", &accnum);
              printf("Enter 1 for deposit and 0 for withdrawal : ");
              scanf("%d", &code);
              if (code)
              {
		printf("\nEnter amount to be deposited : ");
		scanf("%d", &amount);
              }
              else
              {
		printf("\nEnter amount to withdraw : ");
		scanf("%d", &amount);
              }
              action(accnum, amount, code);
              break;

	case 2:
              printf("All members with account balance less than 100 are following : ");
              below100();
              break;

	case 3:
              exit(0);
	}}

}

void below100()
{
	int i;
	for (i = 0; i < 200; i++)
	{
		if (sbi[i].bal < 100 && sbi[i].bal > 0)
		{
			printf("\nName : %s", sbi[i].name);
			printf("\nAccount Number : %d", sbi[i].acc_num);
			printf("\nBalance : %d\n\n", sbi[i].bal);
		}
	}
}

void action(int accnum, int amount, int code)
{
	int i;
	for (i = 0; i < 200; i++)
		if (sbi[i].acc_num == accnum)
			break;
	if (!code)
	{
		if (sbi[i].bal - amount < 100)
		{
			printf("\nThe balance is insufficient for the specified withdrawal");
			return;
		}
		else
		{
			sbi[i].bal -= amount;
			printf("\nYour new account balance is : %d", sbi[i].bal);
		}
	}
	else
	{
		sbi[i].bal += amount;
		printf("\nYour new account balance is : %d", sbi[i].bal);
	}

}
