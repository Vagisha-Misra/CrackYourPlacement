/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        set<ListNode *> s;
        ListNode * curr = head;
        // flag = false;
        while(curr != NULL){
            if(s.count(curr)==1){
                return true;
            }
            s.insert(curr);
            curr = curr->next;
        }
        return false;
    }
};
