class Solution {
public:
    bool isValid(string s) {
        if(s.size()%2!=0){
            return false;
        }
        stack<char> strings;
        char temp;
        for(int i =0; s[i];i++){
            temp = s[i];
            if(temp == '(' || temp == '[' || temp == '{'){
                strings.push(temp);
                cout<<"pushing ";
            }else if 
            (strings.size() > 0  && ((temp == ')' && strings.top() == '(')
             ||( temp =='}' && strings.top() == '{' ) 
             ||( temp == ']' && strings.top() == '['))){
      
                strings.pop();


            }else{
                return false;
            }
        }
        if(strings.size() > 0){
            return false;
        }
        return true;
    }
};
