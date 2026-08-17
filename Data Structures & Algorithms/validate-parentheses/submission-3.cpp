class Solution {
public:
    bool isValid(string s) {

        stack<char> openStack;

        for(char c : s) {
            if(c == '(') {
                openStack.push(')');
            }
            else if(c == '[') {
                openStack.push(']');
            }
            else if(c == '{') {
                openStack.push('}');
            }
            else if(openStack.empty() || openStack.top() != c) {
                    return false;
            }
            else {
                openStack.pop();
            }
        }

        return openStack.empty();
        
    }
};
