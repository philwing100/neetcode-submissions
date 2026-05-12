public class Solution {
    public List<string> LetterCombinations(string digits) {
        if (digits.Length == 0) return new List<string>(); // Handle empty input

        List<string> res = new List<string> { "" };
        Dictionary<char, string> mapping = new Dictionary<char, string> {
            { '2', "abc" }, { '3', "def" }, { '4', "ghi" },
            { '5', "jkl" }, { '6', "mno" }, { '7', "pqrs" },
            { '8', "tuv" }, { '9', "wxyz" }
        };

        foreach (char c in digits) {
            List<string> temp = new List<string>();

            if (!mapping.ContainsKey(c)) continue; // Ignore invalid digits
            
            string letters = mapping[c]; // Get corresponding letters

            foreach (string str in res) {
                foreach (char letter in letters) {
                    temp.Add(str + letter);
                }
            }

            res = temp; // Update result with new combinations
        }

        return res;
    }
}
