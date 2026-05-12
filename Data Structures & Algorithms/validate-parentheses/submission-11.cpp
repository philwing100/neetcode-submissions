class Solution {
public:
    bool isValid(string s) {
        if(s.length()%2!=0){
            return false;
        }
        stack<char> stack;


        for(int i =0;i<s.length();i++){
            if(s[i]=='('){
                stack.push('(');
            }else if(s[i]=='['){
                stack.push('[');
            }else if(s[i]=='{'){
                stack.push('{');
            }else if (s[i]==']'){
                if(!stack.empty() && stack.top() == '['){
                    stack.pop();
                }else{
                    return false;
                }
            }else if (s[i]==')'){
                if(!stack.empty() &&  stack.top() == '('){
                    stack.pop();
                }else{
                    return false;
                }
            }else if (s[i]=='}'){
                if(!stack.empty() &&  stack.top() == '{'){
                    stack.pop();
                }else{
                    return false;
                }
            }
        }
        if (!stack.empty()) return false;
        return true;
    }
};
