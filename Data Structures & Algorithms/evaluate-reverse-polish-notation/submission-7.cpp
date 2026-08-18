class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stack;

        for(string item : tokens) {
            if(item == "+") {
                int sum = stack.top();
                stack.pop();
                sum += stack.top();
                stack.pop();
                stack.push(sum);
            }
            else if(item == "-") {
                int difference = stack.top();
                stack.pop();
                difference = stack.top() - difference;
                stack.pop();
                stack.push(difference);
            }
            else if(item == "*") {
                int product = stack.top();
                stack.pop();
                product *= stack.top();
                stack.pop();
                stack.push(product);  
            }
            else if(item == "/") {
                int quotient = stack.top();
                stack.pop();
                quotient = stack.top() / quotient;
     
                stack.pop();
                stack.push(quotient);
            }
            else{
                int num = stoi(item);
                stack.push(num);
            }
        }
        return stack.top();
    }
};
