class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int minprice = 200;
        for (auto it: prices) { 
            minprice = min(it, minprice);
            profit = max(profit, (it - minprice));
        }
        return profit;
    }
};
