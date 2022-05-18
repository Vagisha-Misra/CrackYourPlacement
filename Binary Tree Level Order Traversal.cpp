// Using temporary vector

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL)return ans;
        queue<TreeNode*> q;
        TreeNode* curr = root;
        q.push(root);
        // int l=1;
        while(q.empty()==false){
            vector<int> level;
            int n = q.size();
            while(n--){
                curr = q.front();q.pop();
                level.push_back(curr->val);
                if(curr->left!=NULL)q.push(curr->left);
                if(curr->right!=NULL)q.push(curr->right);
            }
            ans.push_back(level);
        }
        return ans;
    }
};


/*
using 1 queue, pop ele in 1 level until current q_size, push its childs, then go to the next level.
time: O(n)
space: O(l_max)

*/

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode *> q;
        
        if (root != NULL) q.push(root);
        
        //detect end of tree (visited all nodes)
        while (!q.empty()) {
            //create new vector for new level
            ans.push_back(vector<int>());
            //iterate curr level (with current length)
            int curr_q_len = q.size();
            for (int i = 0; i < curr_q_len; i++) {
                TreeNode *curr = q.front();
                q.pop();
                ans.back().push_back(curr->val);
                
               //push new child of next level to the queue
                if (curr->left != NULL) q.push(curr->left);
                if (curr->right != NULL) q.push(curr->right);
            }
        }

        
        return ans;
    }
};