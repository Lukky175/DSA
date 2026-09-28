class Solution {
public:
    int maxProfit(vector<int>& prices) {
      mini = prices[i];
      maxProfit = 0;
      for(int i=0;i<prices.size();i++){
        profit = prices[i]-mini;
        maxProfit = max(profit, maxProfit);
        mini = min( mini, prices[i]);
      }
      return maxProfit;
    }
};

// Complexity
// Time:  O(n)
// Space: O(1)
