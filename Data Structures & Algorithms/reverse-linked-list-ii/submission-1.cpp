/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;

        ListNode* prev = nullptr;
        ListNode* curr = head;

        ListNode* beforeLeft = nullptr; // node before left
        ListNode* start = nullptr;      // first node in sublist (will become tail)

        int pos = 1;

        while (curr) {
            if (pos == left - 1) {
                beforeLeft = curr;
            }

            if (pos == left) {
                start = curr;
            }

            if (pos >= left && pos <= right) {
                ListNode* temp = curr->next;
                curr->next = prev;
                prev = curr;
                curr = temp;
            } else {
                curr = curr->next;
            }

            // when we finish reversing
            if (pos == right) {
                if (beforeLeft) {
                    beforeLeft->next = prev;
                } else {
                    head = prev; // left was 1
                }

                start->next = curr; // connect tail to remaining list
                break;
            }

            pos++;
        }

        return head;
    }
};

