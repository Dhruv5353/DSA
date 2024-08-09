#include <iostream>
#include <stack>
using namespace std;

void display(stack<int> s) {
    if (s.empty()) {
        cout << "Stack is empty." << endl;
        return;
    }
    cout << "Stack elements: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> myStack;
    int choice, value;

    while (true) {
        cout << "\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                myStack.push(value);
                cout<< value <<" Element is inserted" <<endl;
                break;
            case 2:
                if (!myStack.empty()) {
                    myStack.pop();
                    cout << "Popped one top most element." << endl;
                } else {
                    cout << "Stack is empty. Cannot pop." << endl;
                }
                break;
            case 3:
                if (!myStack.empty()) {
                    cout << "Top element: " << myStack.top() << endl;
                } else {
                    cout << "Stack is empty. please push element to the stack." << endl;
                }
                break;
            case 4:
                display(myStack);
                break;
            case 5:
                cout << "Exit from the program------------" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please select the number between 1 to 5." << endl;
        }
    }
}