#include <iostream>
#include <stack>
#include <unordered_map>

bool isValid(std::string s) {
    std::stack<char> st;
    std::unordered_map<char, char> brackets = {
        {')', '('},
        {'}', '{'},
        {']', '['}
    };

    for (char c : s) {
        if (brackets.count(c)) {
            if (st.empty() || st.top() != brackets[c]) {
                return false;
            }
            st.pop();
        } else {
            st.push(c);
        }
    }

    return st.empty();
}

int main() {
    std::string s = "()";
    bool isValidString = isValid(s);
    std::cout << std::boolalpha << isValidString << std::endl;

    return 0;
}