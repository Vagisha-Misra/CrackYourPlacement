// Hash map approach
// TC = O(nlogn) for map in c++ or O(n) for unordered map
// SC = O(n)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mp;
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
            if(mp[nums[i]] > floor(n/2.0)){
                return nums[i];
            }
        }
        return 0;
    }
};

// Moore's Voting Algorithm
// TC = O(n)
// SC = O(1)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int element = 0;
        for(int num : nums){
            if(count == 0){
                element = num;
            }
            if(num == element)count++;
            else count--;
        }
        return element;
    }
};