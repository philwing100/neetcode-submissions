public class Solution {
    public bool IsValid(string s) {
        Stack<char> stack = new Stack<char>();
        
        for(int i = 0; i < s.Length; i++) {
            char c = s[i];

            if (c == '(' || c == '{' || c == '[') {
                stack.Push(c);
            } 
            else {
                if (stack.Count == 0) return false; 
                
                char top = stack.Peek();
                if ((c == '}' && top == '{') || 
                    (c == ')' && top == '(') || 
                    (c == ']' && top == '[')) {
                    stack.Pop(); 
                } else {
                    return false; 
                }
            }
        }

        return stack.Count == 0; 
    }
}
