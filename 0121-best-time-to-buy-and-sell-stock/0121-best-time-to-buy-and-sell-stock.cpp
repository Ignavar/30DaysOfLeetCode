class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        vector<int> minPrices(size);
        vector<int> maxPrices(size);
        minPrices[0] = prices[0];
        for(int i=1;i<size;i++)
            minPrices[i] = min(minPrices[i-1],prices[i]);
        maxPrices[size-1] = prices[size-1];
        for(int i=size-2;i>=0;i--)
            maxPrices[i] = max(maxPrices[i+1],prices[i]);
        int ans = 0;
        for(int i =0;i<size;i++)
            ans = max(ans,maxPrices[i]-minPrices[i]);
        return ans;
    }
};