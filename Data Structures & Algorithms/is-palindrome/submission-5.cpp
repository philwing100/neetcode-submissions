class Solution {
public:
    bool isPalindrome(string s) {
        string trimmed = "";
        for(int i =0;i<s.size();i++){
            if(isAlphaNumeric(s[i])){
                trimmed.append(1,(tolower(s[i])));
            }
        }
        cout<<trimmed;
        int l = 0, r = trimmed.size()-1;
        
        while(l<r){
            if(trimmed[l]!=trimmed[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    bool isAlphaNumeric(char a){
        return (isalpha(a)||isdigit(a));
    }
 };
