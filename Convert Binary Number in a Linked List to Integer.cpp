/* Traverse the linked list and store all 
   values in a string or array. 
   convert the values obtained to decimal value.*/

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int> arr;
        int ans =0;
        ListNode* ptr = head;
        while(ptr != NULL){
            arr.push_back(ptr->val);
            ptr=ptr->next;
        }
        int power = arr.size()-1;
        for(int val : arr){
            ans = ans + val*(pow(2,power--));
        }
        return ans;
    }
};

/* We can solve the problem in O(1) memory using bits operation. 
   use shift left operation ( << ) and or operation ( | ) to get
the decimal value in one operation.*/
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int> arr;
        int ans =0;
        ListNode* ptr = head;
        while(ptr != NULL){
            ans = (ans<<1) + ptr->val;
            ptr=ptr->next;
        }
        return ans;
    }
};