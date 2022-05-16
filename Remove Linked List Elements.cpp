//Recursive solution
//TC = O(n)
//SC = O(n) due to recursion call stack
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL) return NULL;
        head->next = removeElements(head->next, val);
        return (head->val == val) ? head->next : head;
    }
};

//Iterative soln using dummy node
// Dummy node is created so that if the first element is same as val, 
// then it should be easy to delete it because dummy node will be
// its previous node
// The head of the ll will be dummy->next always
// TC = O(n)
// SC = O(1)

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
    ListNode* removeElements(ListNode* head, int val) {
        // if(head == NULL) return NULL;
        // head->next = removeElements(head->next, val);
        // return (head->val == val) ? head->next : head;
        ListNode* dummy = new ListNode(0,head);
        ListNode* prev = dummy;
        ListNode* curr = head;
        while(curr!=NULL){
            if(curr->val == val){
                ListNode* temp = curr;
                prev->next = curr->next;
                curr = curr->next;
                delete temp;
            }else{
                prev = prev->next;
                curr = curr->next;
            }
        }
        return dummy->next;
    }
};
