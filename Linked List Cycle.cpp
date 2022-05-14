/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// Approach 1
//     uses set or hash table or map
//     TC = O(n)
//     SC = O(n)
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


// Approach 2
//     2 Pointer Approach
//     if the ll has cycle then fast and slow pointers will coincide 
//     return true if this happens
//     else if fast reaches the NULL ptr or fast->next is null 
//     then stop traversing and return false
//        TC = O(n)
//        SC = O(1)

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;
        if(head == NULL)return false;
        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow)return true;
        }
        return false;
    }
};
