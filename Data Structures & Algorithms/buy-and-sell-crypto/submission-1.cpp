class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0;int r=1;
        int profit;
        int ans=0;
        while(r<prices.size()){
            if(prices[l]<prices[r]){
                profit = prices[r]-prices[l];
                ans = max(profit,ans);
            }
            else{
                l=r;
            }
            r++;
        }
        return ans;
    }
};
