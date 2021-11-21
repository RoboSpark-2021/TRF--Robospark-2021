// Write a code to check if a given set of character array consisting of
// {,},(,),[,] is balanced or not. Test Cases: Input 1: []{([])} Output: Yes
// Input 2: {(}{)} Output: No
// Input 3: {[]})( Output: No
// Input 4: {[()]} Output: Yes
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20
// Structure for stack
struct stack {
  char st[MAX];
  int top;
} s;
// Initializing top for stack
void init() { s.top = -1; }
// Check if stack is full
int isFull() {
  if (s.top == (MAX - 1)) {
    return 1;
  }
  return 0;
}

// Check if stack is empty
int isEmpty() {
  if (s.top == -1) {
    return 1;
  }
  return 0;
}

// Push Element
void push(char data) {
  if (isFull()) {
    printf("[!!] Stack Overflow \n");
    exit(0);
  } else {
    s.st[++(s.top)] = data;
    return;
  }
}

// Pop and return top element
int pop() {
  if (isEmpty()) {
    printf("[!!] Stack Underflow \n");
    exit(1);
  } else {
    int x;
    x = s.st[s.top];
    (s.top)--;
    return x;
  }
}

// Return top element
int topElement() {
  if (isEmpty()) {
    printf("[!!] Stack Underflow \n");
    exit(2);
  }
  return s.st[s.top];
}

// Function to print stack
void printStack() {
  if (!isEmpty()) {
    for (int i = (s.top); i >= 0; i--) {
      printf("%d \n", (s.st[i]));
    }
  }
}

char getopening(char c) {
  switch (c) {
  case '}':
    return '{';
  case ')':
    return '(';
  case ']':
    return '[';
  }

  // never reached
  return 'i';
}

// Function to check if the character array is balanced or not
// Return 1 if it is and 0 if it is not
int isBalanced(char *exp) {
  int len = strlen(exp);
  for (int i = 0; i < len; i++) {
    char c = exp[i];
    switch (c) {
    case '{':
    case '[':
    case '(': {
      push(c);
      break;
    }
    case '}':
    case ']':
    case ')': {
      char open = getopening(c);
      if (isEmpty() || topElement() != open)
        return 0;
      pop();
    }
    }
  }

  return isEmpty() ? 1 : 0;
}

// Driver Code
int main() {
  init();
  char exp[MAX];
  printf(">> Expression: \n");
  scanf("%s", exp);
  size_t len = sizeof(exp) / sizeof(exp[0]);
  isBalanced(exp) ? printf("Yes \n") : printf("No \n");

  return 0;
}
