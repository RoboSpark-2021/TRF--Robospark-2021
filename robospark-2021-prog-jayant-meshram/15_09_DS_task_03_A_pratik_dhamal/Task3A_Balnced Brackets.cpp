#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX 100

struct stack {
	char Arr[MAX];
	int top;
}st;

// Initializing top for stack
void init(){
	st.top=-1;
}

// Check stack is full or not 
bool isFull(){
	if(st.top==(MAX-1)){
		return true;
	}
	else {
		return false;
	}
	
}

// check satck is empty or not 
bool isEmpty(){
	if(st.top==-1){
		return true;
	}
	else {
		return false ;
	}
}


//Push element
void push(char item){
	if(isFull()){
		printf("\n Stack Overflow");
		exit(0);
	}
	else{
		st.top++;
		st.Arr[st.top]=item;
	}
}

//pop element
void pop(){
	if(isEmpty()){
		printf("\n Stack Underflow");
		exit(1);
	}
	else {
		st.top--;
	}
}

char gettop (){
	return st.Arr[st.top];
}


bool isBalanced(char opening,char closing){
	if(opening=='(' && closing==')')
	{
		return true;
	}
	else if(opening=='{' && closing=='}')
	{
		return true;
	}
	else if(opening=='[' && closing==']')
	{
		return true;
	}
	else {
		return false;
	}	
}


int main (){
	char exp[MAX];
	int length=0,i,j,k;
	
	init();
	
	printf("Enter the expression :--");
	scanf("%s",&exp);
	for (int i=0;exp[i]!='\0';i++)
	{
		length ++;
	}
	
	for (j=0;j<length;j++)
	{
		if (exp[j]=='(' || exp[j]=='{' || exp[j]=='[')
		{
			push(exp[j]);
		}
		else if(exp[j]==')' || exp[j]=='}' || exp[j]==']')
		{
			char a=gettop();
			//printf("%c",a);
			if (isEmpty() || !isBalanced(gettop(),exp[j])) 
			{
				printf("<<<<<Unbanaced Expression>>>>> \n");
				return 0;
			}
			else {
				pop();
			}
		}
	}
	if (isEmpty()){
		printf("<<<<<Balanced Expression>>>>>\n");
	}
	else {
		printf("<<<<<Unbanaced Expression>>>>>\n");
	}
	
}

