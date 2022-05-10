// Approach 1 using sorting
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int a = nums[0]*nums[1]*nums[n-1];
        int b = nums[n-1]*nums[n-2]*nums[n-3];
        ans = max(a,b);
        return ans;
    }
};


//Approach 2 
// Single iteration, we calculate two minimum and 3 maximum numbers and 
//then return max product
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int min1 = INT_MAX, min2 = INT_MAX;
        int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
        for (int n: nums) {
            if (n <= min1) {
                min2 = min1;
                min1 = n;
            } else if (n <= min2) {     // n lies between min1 and min2
                min2 = n;
            }
            if (n >= max1) {            // n is greater than max1, max2 and max3
                max3 = max2;
                max2 = max1;
                max1 = n;
            } else if (n >= max2) {     // n lies betweeen max1 and max2
                max3 = max2;
                max2 = n;
            } else if (n >= max3) {     // n lies betwen max2 and max3
                max3 = n;
            }
        }
        return max(min1 * min2 * max1, max1 * max2 * max3);
    }
};