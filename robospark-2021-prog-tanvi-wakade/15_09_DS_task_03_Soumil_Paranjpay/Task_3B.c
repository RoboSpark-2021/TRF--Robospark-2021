// Implement an optimal approach for implementing two stacks in a single array.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20

// Structure for two stacks
struct TwoStacks {
  char arr[MAX];
  int top1;
  int top2;
} ts;

// Initialise top1 and top2 here
void init() {
  ts.top1 = -1;
  ts.top2 = (MAX / 2) - 1;
}

int is1Full() { return ts.top1 == (MAX / 2) - 1 ? 1 : 0; }

int is2Full() { return ts.top2 == (MAX - 1) ? 1 : 0; }

int is1Empty() { return ts.top1 == -1 ? 1 : 0; }

int is2Empty() { return ts.top2 == (MAX / 2) - 1 ? 1 : 0; }

// Write the code to push the data in Stack 1
void push1(int data) {
  if (is1Full()) {
    printf("Stack overflow\n");
    exit(EXIT_FAILURE);
  }
  ts.arr[++ts.top1] = data;
}

// Write the code to push the data in Stack 2
void push2(int data) {
  if (is2Full()) {
    printf("Stack overflow\n");
    exit(EXIT_FAILURE);
  }
  ts.arr[++ts.top2] = data;
}

// Write the code to pop the data from Stack 1
int pop1() {
  if (is1Empty()) {
    printf("Stack underflow\n");
    exit(EXIT_FAILURE);
  }
  return ts.arr[ts.top1--];
}

// Write the code to pop the data from Stack 2
int pop2() {
  if (is2Empty()) {
    printf("Stack underflow\n");
    exit(EXIT_FAILURE);
  }
  return ts.arr[ts.top2--];
}

// Driver Code
int main() {

  init();

  int opt, element, poppedElement;

  do {

    printf(">> Which option do you want to choose? \n");
    printf(" 1. Push in Stack 1 \n 2. Push in Stack 2 \n 3. Pop from Stack 1 "
           "\n 4. Pop from Stack 2 \n");
    scanf("%d", &opt);

    switch (opt) {
    case 1:
      printf(">> Enter the element you want to push in Stack 1: \n");
      scanf("%d", &element);
      push1(element);
      break;
    case 2:
      printf(">> Enter the element you want to push in Stack 2: \n");
      scanf("%d", &element);
      push2(element);
      break;
    case 3:
      poppedElement = pop1();
      printf(">> The popped element is %d. \n", poppedElement);
      break;
    case 4:
      poppedElement = pop2();
      printf(">> The popped element is %d. \n", poppedElement);
      break;
    case 0:
      printf("[!!] Exiting");
      exit(0);
    default:
      printf("[!!] Invalid Input, Try Again");
      break;
    }
  } while (opt != 0);

  return 0;
}
