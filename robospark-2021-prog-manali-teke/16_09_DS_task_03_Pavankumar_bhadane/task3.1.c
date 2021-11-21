// Write a code to check if a given set of character array consisting of {,},(,),[,] is balanced or not.
// Test Cases:
// Input 1: []{([])} Output: Yes
// Input 2: {(}{)} Output: No
// Input 3: {[]})( Output: No
// Input 4: {[()]} Output: Yes

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 20

// Structure for stack
struct stack
{
  char st[MAX];
  int top;
}s;

// Initializing top for stack
void init(){
    s.top = -1;
}

// Check if stack is full
int isFull()
{
    if(s.top == (MAX-1))
	{
        return 1;
    }
    return 0;
}

// Check if stack is empty
int isEmpty()
{
    if(s.top == -1)
	{
        return 1;
    }
    return 0;
}

// Push Element
void push(char data)
{
    if(isFull(s))
	{
        printf("[!!] Stack Overflow \n");
        exit(0);
    }
	else
	{
        s.st[++(s.top)] = data;
        return;
    }
}

// Pop and return top element
int pop()
{
    if(isEmpty(s))
	{
        printf("No \n");
        exit(1);
    }
	else
	{
        int x;
        x = s.st[s.top];
        (s.top)--;
        return x;
    }
}

// Return top element
int topElement()
{
    if(isEmpty(s))
	{
        printf("No \n");
        exit(2);
    }
    return s.st[s.top];
}

// Function to print stack
void printStack()
{
	int i;
    if(!isEmpty(s))
	{
        for(i=(s.top); i>=0; i--)
		{
            printf("%d \n", (s.st[i]));
        }
    }
}

// Function to check if the character array is balanced or not
// Return 1 if it is and 0 if it is not
int isBalanced(char exp[])
{
	if(strlen(exp)%2)
		return 0;
	return 1;
}

// Driver Code
int main() 
{
    init();
	int i;
    char exp[MAX];
    printf(">> Expression: \n");
    scanf("%s", exp);
    if(!isBalanced(exp))
	{
		printf("No \n");
		return 0;
	}
	else
	{
		for(i=0;i<(strlen(exp));i++)
		{
			if(exp[i]=='(' || exp[i]=='[' || exp[i]=='{')
				push(exp[i]);
			else if(exp[i]==')')
			{
				if(topElement()=='{' || topElement()=='[')
				{
					printf("No \n");
					return 0;
				}
				else 
				{
					while(topElement()!='(')
						pop();
					pop();
				}
			}
			else if(exp[i]==']')
			{
				if(topElement()=='(' || topElement()=='{')
				{
					printf("No \n");
					return 0;
				}
				else 
				{
					while(topElement()!='[')
						pop();
					pop();
				}
			}
			else if(exp[i]=='}')
			{
				if(topElement()=='(' || topElement()=='[')
				{
					printf("No \n");
					return 0;
				}
				else 
				{
					while(topElement()!='{')
						pop();
					pop();
				}
			}
		}
	} 
	if(isEmpty())
		printf("Yes \n");
	else
    	printf("No \n");
  return 0;
}
