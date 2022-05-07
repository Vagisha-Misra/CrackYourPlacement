// Using recursion
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1)return true;
        if(n==0)return false;
        if(n%2==0) return isPowerOfTwo(n/2);
        else return false;
    }
};

// using concept of bits
// if n is power of 2 then its binary is like: 10000...
// binary of n-1 is of form 01111...
// so bitwise and of n and n-1 is zero if n is power of 2
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0)return false;
        int val = n & (n-1);
        if(val == 0){
            return true;
        }else return false;
    }
};

// Better approach
// if n is power of 2 i.e 2^x then log2(n) will give x 
// otherwise it will be a decimal value like 1.414 etc.
// Therefore ceil and floor of log2(n) will be same if
// n is power of 2 
// n = 16 , log2(16) = 4 and its ceil and floor are same
// n = 12 , log2(12) = 3.584963 its ceil and floor are different
// TC = O(1)
class Solution {
public:
    bool isPowerOfTwo(int n) {
       if(n==0)
            return false;
        
        return floor(log2(n))==ceil(log2(n))?true:false;
    }
};