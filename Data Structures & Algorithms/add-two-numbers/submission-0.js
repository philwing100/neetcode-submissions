/**
 * Definition for singly-linked list.
 * class ListNode {
 *     constructor(val = 0, next = null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */

class Solution {
    /**
     * @param {ListNode} l1
     * @param {ListNode} l2
     * @return {ListNode}
     */
    addTwoNumbers(l1, l2) {
        let num1 = "", num2 = "";

        while(l1!==null){
            num1+=l1.val;
            l1 = l1.next;
        }
        while(l2!==null){
            num2+=l2.val;
            l2 = l2.next;
        }
        
        //reverse num1 and num2
        for(let i = num1.length;i>0;i--){
            
        }
        let rev1 = +num1.split('').reverse().join('');
        let rev2 = +num2.split('').reverse().join('');
        const revsum = (rev1 + rev2).toString().split('').reverse().join('');;
        
        const dummy = new ListNode();
        let curr = dummy;
        for(let i=0;i<revsum.length;i++){
            curr.next = new ListNode(revsum.substring(i,i+1));
            curr=curr.next;
        }


        return dummy.next;
        

        //reverse the result back

        //create a new linked list and return the head
    }
}
