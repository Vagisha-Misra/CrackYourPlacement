
//Iterative Solution 
//TC = O(n1 + n2)
//SC = O(1)

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL)return l2;
        if(l2 == NULL)return l1;
        ListNode* head = l1;
        if(l1->val <= l2->val){
            l1=l1->next;
        }else{
            head = l2;
            l2=l2->next;
        }
        ListNode* curr = head;
        while(l1 && l2){
            if(l1->val <= l2->val){
                curr->next = l1;
                curr=curr->next;
                l1=l1->next;
            }else{
                curr->next = l2;
                curr=curr->next;
                l2=l2->next;
            }
        }
        if(l1)curr->next=l1;
        if(l2)curr->next=l2;
        return head;
    }
};


//Recursive Solution 
//TC = O(n1 + n2)
//SC = O(n1 +n2), due to recursion call stack
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL)return l2;
        if(l2 == NULL)return l1;
		
		if(l1 -> val <= l2 -> val){
			l1 -> next = mergeTwoLists(l1 -> next, l2);
			return l1;
		}
		else{
			l2 -> next = mergeTwoLists(l1, l2 -> next);
			return l2;            
		}
    }
};