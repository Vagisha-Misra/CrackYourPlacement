// Iterative Solution
// In this we use stack.
// We go left left left pushing elements into stack till curr = null,  then we pop the top of stack and print the popped element and go to its right. We do this in a loop until curr==null or stack is empty.
// Time Complexity = Theta(n), exactly we traverse all nodes
// Space Complexity = O(h), at a time max nodes in stack are equal to height of tree
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        TreeNode* curr = root;
        stack<TreeNode*> st;
        while(curr != NULL || st.empty() == false){
            while(curr!=NULL){
                st.push(curr);
                curr=curr->left;
            }
            curr=st.top();st.pop();
            ans.push_back(curr->val);
            curr=curr->right;
        }
        return ans;
    }
};



// Recursive Solution
// This is more easy and intuitive.
// Time Complexity = Theta(n), exactly we traverse all nodes
// Space Complexity = O(h), because of recursive call stack frame, 
// at a time function is called for left left left of current node 
// i.e max of height number of calls are made at a time.

void inorderTraversal(TreeNode* root) {
        if(root==Null)return;
        inorderTraversal(root->left);
        cout<<root->data;
        inorderTraversal(root->right);
    }
