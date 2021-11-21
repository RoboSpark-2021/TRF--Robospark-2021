#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct customer_data {
  int account_number;
  char *name;
  int balance;
};

struct customer_data all_data[10] = {
    {1, "Customer1", 1000},   {2, "Customer2", 1000}, {3, "Customer3", 1000},
    {4, "Customer4", 1000},   {5, "Customer5", 1000}, {6, "Customer6", 1000},
    {7, "Customer7", 1000},   {8, "Customer8", 1000}, {9, "Customer9", 1000},
    {10, "Customer10", 1000},
};

void print_customers_below100();
void print_customer_data(struct customer_data);
struct customer_data *prompt_customer_data();

int main() {
  char c, choice;

  do {
    printf("A. List customers with balance below 100\n");
    printf("B. Deposit money\n");
    printf("C. Withdraw money\n");
    printf("What would you like to do? (a, b, c): ");
    scanf(" %c", &choice);
    choice = tolower(choice);

    switch (choice) {
    case 'a': {
      printf("Customers with balance below 100: \n");
      print_customers_below100();
    }

    case 'b': {
      struct customer_data *data = prompt_customer_data();
      if (data == NULL)
        goto end;
      int deposit_amt;
      printf("Enter the money you'd like to deposit: ");
      scanf("%d", &deposit_amt);
      data->balance += deposit_amt;
      print_customer_data(*data);
      break;
    }
    case 'c': {
      struct customer_data *data = prompt_customer_data();
      if (data == NULL)
        goto end;

      int withdraw_amt;
      printf("How much would you like to withdraw?: ");
      scanf("%d", &withdraw_amt);

      if (withdraw_amt > data->balance) {
        printf("The balance is insufficient for the specified withdrawal.\n");
        goto end;
      }
      data->balance -= withdraw_amt;
      print_customer_data(*data);
      break;
    }
    default: {
      printf("Invalid choice (must be a, b, or c)\n");
      goto end;
    }
    }

  end:
    printf("Type y to exit: ");
    scanf(" %c", &c);
  } while (c != 'y');
}

void print_customers_below100() {
  for (int i = 0; i < 10; i++) {
    struct customer_data data = all_data[i];
    if (data.balance < 100)
      print_customer_data(data);
  }
}

void print_customer_data(struct customer_data data) {
  printf("Name: %s\nAccount number: %d\nBalance: %d\n\n", data.name,
         data.account_number, data.balance);
}

struct customer_data *prompt_customer_data() {
  char name[100];
  int account_number;
  printf("Enter your name: ");
  scanf("%s", name);
  printf("Enter your account number: ");
  scanf("%d", &account_number);

  if (account_number > 10 || account_number < 0)
    goto cleanup;
  struct customer_data *data =
      (struct customer_data *)malloc(sizeof(struct customer_data));
  data = &all_data[account_number - 1];
  if (strcmp(data->name, name) != 0)
    goto cleanup;

  return data;

cleanup:
  printf("Invalid account data.\n");
  return NULL;
}
