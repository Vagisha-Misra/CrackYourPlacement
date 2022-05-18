// Iterative Solution 1
// A O(n) extra space and O(n) time solution is discussed.In this we use stack.It is similar to breadth first approach so space complexity is O(n). But in it we push right first then left because we want left to be at top of stack.
// Time Complexity = Theta(n), exactly we traverse all nodes
// Space Complexity = O(n)
vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root == NULL)return ans;
        TreeNode* curr=root;
        stack<TreeNode*> s;
        s.push(curr);
        while(!s.empty()){
            curr=s.top();
            ans.push_back(curr->val);
            s.pop();
            if(curr->right!=NULL)s.push(curr->right);
            if(curr->left!=NULL)s.push(curr->left);
        }
        return ans;
    }


// Recursive Solution
// This is more easy and intuitive.
// Time Complexity = Theta(n), exactly we traverse all nodes
// Space Complexity = O(h), because of recursive call stack frame, 
// at a time function is called for left left left of current node 
// i.e max of height number of calls are made at a time.
void preorderTraversal(TreeNode* root) {
        if(root==Null)return;
        cout<<root->data;		
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
