#include <stack>
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int count = 0;

        while (count < s.length()) {

            if (s[count] == '(' || s[count] == '{' || s[count] == '[') {
                st.push(s[count]);
            }
            else {
                if (st.empty())
                    return false;

                char top1 = st.top();

                if ((top1 == '(' && s[count] == ')') ||
                    (top1 == '{' && s[count] == '}') ||
                    (top1 == '[' && s[count] == ']')) {

                    st.pop();
                }
                else {
                    return false;
                }
            }

            count++;
        }

        return st.empty();
    }
};

int main() {
    Solution s;

    cout << s.isValid("()[]{}") << endl;     // 1
    cout << s.isValid("([)]") << endl;       // 0
    cout << s.isValid("((()))") << endl;     // 1
    cout << s.isValid("(((") << endl;        // 0
    cout << s.isValid(")") << endl;          // 0
}