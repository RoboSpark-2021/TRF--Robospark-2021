#include<bits/stdc++.h>
using namespace std;
void reverseQueue(queue<int> &q) {
    // Base case
    // reverse of an empty queue is an empty queue
    if (q.empty()) {
        return;
    }

    // remove an element from queue and store it in a variable, say curr
    int current = q.front();
    q.pop();
    // recursively call the reverseQueue method on remaining queue
    reverseQueue(q);
    // add the removed element to the end of the reversed queue
    q.push(current);
}
int main() {
    // Example 1
    queue<int> q1;
    q1.push(10);
    q1.push(9);
    q1.push(3);
    q1.push(11);
    q1.push(5);
    reverseQueue(q1);
    while (!q1.empty()) {
        cout<<q1.front()<<" ";
        q1.pop();
    }
    cout<<endl;

    // Example 2
    queue<int> q2;
    q2.push(1);
    q2.push(2);
    q2.push(3);
    q2.push(4);
    q2.push(5);
    q2.push(6);
    q2.push(7);
    q2.push(8);
    reverseQueue(q2);
    while (!q2.empty()) {
        cout<<q2.front()<<" ";
        q2.pop();
    }
    cout<<endl;

    return 0;
}
