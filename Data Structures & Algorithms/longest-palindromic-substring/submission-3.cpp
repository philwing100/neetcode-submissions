class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()==1)return s;

        int resIdx =0, resLen =0;
        int n = s.size();

        for(int i = 0; i<n;i++){
            int l = i, r = i;

            while(l>=0 && r < n && s[l]==s[r]){
                if(r-l+1>resLen){
                    resIdx=l;
                    resLen=r-l+1;
                }
                r++;
                l--;
            }
            l=i,r=i+1;
            while(l>=0 && r < n && s[l]==s[r]){
                if(r-l+1>resLen){
                    resIdx=l;
                    resLen=r-l+1;
                }
                r++;
                l--;
            }

            
        }
        return s.substr(resIdx, resLen);
    }
};
