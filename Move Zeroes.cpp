class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow=0, curr=0;
        for(; curr<nums.size(); curr++){
            if(nums[curr] != 0){
                swap(nums[slow], nums[curr]);
                slow++;
            }
        }
    }
};

// Space Complexity : O(1). Only constant space is used.
// Time Complexity: O(n).
