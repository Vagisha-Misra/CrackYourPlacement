class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Since array is sorted, we traverse the array
        // using 2 pointers :- fast and slow, we skip the
        // duplicate elements and when we find an element 
        // different from the previous element we copy it 
        // to its desired location i.e slow+1 index.

        // Edge case (if size of nums=0)
        if(nums.size()==0)return 0;

        // 2 pointer method
        // slow pointer and fast pointer
        int i=0;
        for(int j=1; j<nums.size(); j++){
            if(nums[i] != nums[j]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
};

// Time Complexity = O(n), one traversal is required
// Space Complexity = O(1), constant extra space required