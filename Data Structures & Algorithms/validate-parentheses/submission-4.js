class Solution {
    /**
     * @param {string} s
     * @return {boolean}
     */
    isValid(s) {
        if(s.length<2){
            return false;
        } 
         let stack = [];
        let res = false;
        for(let c of s){
            if(c==='('){
                stack.push('(');
            } else if (c==='{') {
                stack.push('{');
            } else if (c ==='['){
                stack.push('[');
            } else if (c=== ')'){
               const b = stack.pop(); 
                if(b !== '('){
                   return false; 
                }
            } else if (c==='}'){
                if(stack.pop() !== '{'){
                    return false;
                }
            } else if ((c===']') && stack.pop() !== '['){
                return false;
            }
        }
        if(stack.length > 0){
            return false;
        }

        return true;
    }
}
