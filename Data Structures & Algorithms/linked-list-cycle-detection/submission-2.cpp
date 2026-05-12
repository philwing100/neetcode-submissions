
class Solution {
public:
    bool hasCycle(ListNode* head) {
        unordered_set<ListNode*> map;
        ListNode* curr=head;
        while(curr){
            if(map.find(curr) == map.end()){
                map.insert(curr);
            }else{
                return true;
            }
            

            curr=curr->next;
        }
        return false;
    }
};
