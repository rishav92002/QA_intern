#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#include <queue>

class Stack {
private:
    queue<int> q;

public:
    // Pushes an element onto the stack
    void push(int value) {
        q.push(value);

        // Rotate the elements to make the newly added element at the front because we can not pop element from back in queue
        for (int i = 0; i < q.size() - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    // Removes the element on top of the stack and returns its value
    int pop() {
        if (q.empty()) {
            cout << "Stack is empty." << std::endl;
            return -1;
        }

        int value = q.front();
        q.pop();
        return value;
    }

    // Returns the value of the element on top of the stack without removing it
    int top() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return -1;
        }

        return q.front();
    }

    // Checks if the stack is empty
    bool isEmpty() {
        return q.empty();
    }
};

int main() {
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);

    cout << "Top element: " << stack.top() << endl;

    std::cout << "Popping elements: ";
    while (!stack.isEmpty()) {
        cout << stack.pop() << " ";
    }
    cout << endl;

    return 0;
}
