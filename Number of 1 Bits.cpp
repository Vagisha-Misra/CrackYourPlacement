// Brute Force Approach
// lets take a number in Binary : 1001 now just see that 
// if it has last bit (least significient bit) is one or not 
// if it is increase the count and rightshift our number and repeat same.
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans = 0;
        while(n > 0)
        {
            if(n%2==1)ans++;
            n /= 2;
        }
        return ans;
    }
};
//Bit Manipulation Approach
//if we do [n & (n - 1)] we reduce one bit from the number.
// e.g. 1001 & 1000 = 1000, 110 & (101) = 100.
// in this case iterations required will be equal to number of set bits in a number.

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans = 0;
        while(n > 0)
        {
            n = n & (n-1);
            ans++;;
        }
        return ans;
    }
};

// TC = O(1) and SC = O(1)
