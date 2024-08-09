#include <iostream>
#include <stack>
#include <sstream>
using namespace std;

int evaluatePostfix(string str) {
    stack<int> st;
    stringstream ss(str);
    string token;

    while (ss >> token) {
        if (isdigit(token[0])) {
            st.push(stoi(token));
        }
        else {
            int operand2 = st.top(); 
            st.pop();
            int operand1 = st.top(); 
            st.pop();
            switch (token[0]) {
            case '+': st.push(operand1 + operand2); 
            break;
            case '-': st.push(operand1 - operand2); 
            break;
            case '*': st.push(operand1 * operand2); 
            break;
            case '/': st.push(operand1 / operand2); 
            break;
            }
        }
    }
    return st.top();
}

int main() {
    string str;
    cout << "Enter postfix expression: ";
    getline(cin, str);
    int result = evaluatePostfix(str);
    cout << "Result: " << result << endl;
    return 0;
}