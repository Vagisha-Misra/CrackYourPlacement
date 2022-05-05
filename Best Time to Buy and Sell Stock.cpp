class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minimum = INT_MAX;
        int profitTillNow = 0;
        for(int i=0; i<n; i++){
            minimum = min(minimum, prices[i]);
            int profitToday = prices[i]-minimum;
            profitTillNow = max(profitToday, profitTillNow);
        }
        return profitTillNow;
    }
};
