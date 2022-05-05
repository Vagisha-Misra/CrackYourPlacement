class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // We traverse the array, and check in hash table 
        // if we have target-arr[i] value in it, if we have it 
        // then we return the indices. 
        // Otherwise we add the arr[i],i into our hash table.
        unordered_map<int, int> umap;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            if(umap.count(target-nums[i]) != 0){
                ans.push_back(umap[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            umap[nums[i]] = i;
        }
        return ans;
    }
};