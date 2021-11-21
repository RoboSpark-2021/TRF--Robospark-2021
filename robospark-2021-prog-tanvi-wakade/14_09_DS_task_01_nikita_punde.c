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
} sbi[10] = { 1, "sam", 2000000,
2, "riya", 1233044,
3, "dev", 66,
4, "jay", 44,
5, "Rahul", 400000
};

int main()
{
	int accnum, amount, code;
	printf("\nEnter your account number : ");
	scanf("%d", &accnum);
	printf("Enter 1 for deposit and 0 for withdrawal : ");
	scanf("%d", &code);
	if (code)
	{
		printf("\nEnter amount to be deposit : ");
		scanf("%d", &amount);
	}
	else
	{
		printf("\nEnter amount to withdraw : ");
		scanf("%d", &amount);
	}
	action(accnum, amount, code);
	_getch();
	system("cls");
	printf("All members with account balance less than 100 are following : ");
	below100();
	_getch();
	return 0;
}

void below100()
{
	int i;
	for (i = 0; i < 10; i++)
	{
		if (sbi[i].bal < 100 && sbi[i].bal > 0)
		{
			printf("\nName : %s", sbi[i].name);
			printf("\nAccount Number : %d\n\n", sbi[i].acc_num);
		}
	}
}

void action(int accnum, int amount, int code)
{
	int i;
	for (i = 0; i < 10; i++)
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


