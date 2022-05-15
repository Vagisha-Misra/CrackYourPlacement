class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* temp = head;
        while(temp != NULL && temp->next != NULL){   
            if(temp->val == temp->next->val){
                if(temp->next->next != NULL) temp->next = temp->next->next;
                else temp->next = NULL;
            }
            else temp = temp->next; 
        }
        return head;
    }
};