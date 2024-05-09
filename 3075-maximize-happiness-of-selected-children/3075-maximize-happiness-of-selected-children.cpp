class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long ans = 0;
        int count = 0;
        int x = 0;
        sort(happiness.begin(),happiness.end());
        for (int i =0;i<k;i++)
        {
            int temp =  happiness[happiness.size()-1];
            happiness.pop_back();
            if(temp+count>0)
                ans+= temp+count;
            count--;
        }
        return ans;
    }
};