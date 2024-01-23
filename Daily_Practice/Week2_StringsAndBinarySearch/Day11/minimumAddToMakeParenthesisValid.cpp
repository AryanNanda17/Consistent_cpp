class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> stack;
        for(auto &i : s){
            if(stack.empty()){
                stack.push(i);
            }
            else if(i=='('){
                stack.push(i);
            }
            else if(i==')'){
                if(stack.top()=='('){
                    stack.pop();
                }
                else{
                    stack.push(i);
                }
            }
        }
        return stack.size();
    }
};