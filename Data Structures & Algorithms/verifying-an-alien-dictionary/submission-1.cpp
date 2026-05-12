class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int charOrder[26];
        for(int i=0;i<order.length();i++){
            charOrder[order[i] - 'a'] = i;
        }

        //compare word 1 with word 2 and ensure that word 1 is before word 2 then go onto the next
        for(int i =0;i<words.size()-1;i++){
                //outer loop controls the word 1 ptr
            string word1=words[i];
            string word2=words[i+1];
            bool isSorted = false;
            int len = min(word1.length(), word2.length());
            for (int j = 0; j < len; j++) {
                if (word1[j] != word2[j]) {
                    if (charOrder[word1[j]-'a'] > charOrder[word2[j]-'a']) return false;
                    isSorted = true;
                    break;
                }
            }
            if (!isSorted && word1.length() > word2.length()) return false;
        }
        return true;
    }
};