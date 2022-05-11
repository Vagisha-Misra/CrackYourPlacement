class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        sum = accumulate(nums.begin(), nums.end(), sum);
        int sumOfNNumbers = n*(n+1)/2;
        return sumOfNNumbers-sum;
    }
};