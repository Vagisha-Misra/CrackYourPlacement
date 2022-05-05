class Solution {
public:
    bool isPalindrome(int x) {
        // long long is chosen because rev can get large enough due to multiplication
        long long rev = 0; 
        int n = x;
        int m = 1000000009;
        while(n>0){
            rev=(rev%m)*10+n%10;
            n=n/10;
        }
        if(rev == x)return true;
        else return false;
    }
};