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
            else {
                if(openStack.empty() || c != openStack.top()) {
                    return false;
                }
                openStack.pop();
            }
        }

        return openStack.empty();
        
    }
};
