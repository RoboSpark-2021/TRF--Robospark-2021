// Implement an optimal approach for implementing two stacks in a single array.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 20

// Structure for two stacks
struct TwoStacks{
    char arr[MAX];
    int top1;
    int top2;
}ts;

// Initialise top1 and top2 here
void init(){
    ts.top1=-1;
    ts.top2=MAX/2-1;
}

// Write the code to push the data in Stack 1
void push1(int data){
    if(ts.top1==MAX/2-1){
        printf("Stack Overflow");
        return;
    }
    else{
        ts.top1++;
        ts.arr[ts.top1]=data;
    }
}

// Write the code to push the data in Stack 2
void push2(int data){
    if(ts.top2==MAX-1){
        printf("Stack Overflow");
        return;
    }
    else{
        ts.top2++;
        ts.arr[ts.top2]=data;
    }
}

// Write the code to pop the data from Stack 1
int pop1(){
    int temp;
    if(ts.top1=-1){
        printf("Underflow");
    }
    else{
        temp=ts.arr[ts.top1];
        ts.top1--;
        return temp;
    }
}

// Write the code to pop the data from Stack 2
void pop2(){
    int temp;
    if(ts.top2==MAX/2-1){
        printf("Underflow");
    }
    else{
        temp=ts.arr[ts.top2];
        ts.top2--;
        printf(">> The popped element is %d. \n", temp);
    }
}
void showstack1()
{
    for(int i=ts.top1;i>=0;i--){
        printf("%d ",ts.arr[i]);
    }
}
void showstack2()
{
    for(int i=ts.top2;i>=MAX/2;i--){
        printf("%d ",ts.arr[i]);
    }
}
// Driver Code
int main() {

    init();

    int opt, element, poppedElement;

    while(opt != 0){

        printf(">> Which option do you want to choose? \n");
        printf(" 1. Push in Stack 1 \n 2. Push in Stack 2 \n 3. Pop from Stack 1 \n 4. Pop from Stack 2 \n 5.Show stack 1\n 6.Show stack 2.\n");
        scanf("%d", &opt);

        switch (opt)
        {
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
                pop2();
                
                break;
            case 0: 
                printf("[!!] Exiting");
                exit(0);
            case 5:
                printf("This is stack 1 \n");
                showstack1();
                break;
            case 6:
                printf("This is stack 2 \n");
                showstack2();
                break;
            default:
                printf("[!!] Invalid Input, Try Again");
                break;
        }
    }

    return 0;
}

