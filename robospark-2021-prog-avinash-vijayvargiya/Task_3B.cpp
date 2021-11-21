#include <iostream>
#include <stdlib.h>

using namespace std;

class twoStacks {
    int* arr;
    int size;
    int top1, top2;

public:
    twoStacks(int n)
    {
        size = n;
        arr = new int[n];
        top1 = n / 2 + 1;
        top2 = n / 2;
    }
    void push1(int x)
    {
        if (top1 > 0) {
            top1--;
            arr[top1] = x;
        }
        else {
            cout << "Stack Overflow"
                 << " By element :" << x << endl;
            return;
        }
    }
    void push2(int x)
    {
        if (top2 < size - 1) {
            top2++;
            arr[top2] = x;
        }
        else {
            cout << "Stack Overflow"
                 << " By element :" << x << endl;
            return;
        }
    }
    int pop1()
    {
        if (top1 <= size / 2) {
            int x = arr[top1];
            top1++;
            return x;
        }
        else {
            cout << "Stack UnderFlow";
            exit(1);
        }
    }
    int pop2()
    {
        if (top2 >= size / 2 + 1) {
            int x = arr[top2];
            top2--;
            return x;
        }
        else {
            cout << "Stack UnderFlow";
            exit(1);
        }
    }
};

int main()
{
    int opt,element,poppedElement;
    twoStacks ts(3);
    while(opt!=0){
    cout << "Which option do you want to choose? \n";
    cout << "1. Push in Stack1 \n2. Push in Stack2 \n3. Pop from Stack1 \n4. Pop from Stack2 \n";
    cin >> opt;
    switch (opt)
        {
            case 1:
                cout << ">> Enter the element you want to push in Stack 1: \n";
                cin >> element;
                ts.push1(element);
                break;
            case 2:
                printf(">> Enter the element you want to push in Stack 2: \n");
                cin >> element;
                ts.push2(element);
                break;
            case 3:
                poppedElement = ts.pop1();
                cout << ">> The popped element is:" << poppedElement << endl;
                break;
            case 4:
                poppedElement = ts.pop2();
                cout << ">> The popped element is:" << poppedElement << endl;
                break;
            case 0:
                cout << "[!!] Exiting";
                exit(0);
            default:
                cout << "[!!] Invalid Input, Try Again";
                break;
        }}
    return 0;
}
