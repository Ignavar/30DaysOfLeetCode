class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int max = -1;
        for(int i=0;i<nums.size();i++)
        {
            int temp = nums[i];
            if(temp>max)
            {
                for(int x =0;x<nums.size();x++)
                {
                    if (-1*nums[x]==temp)
                        max = temp;
                }
            }
        }
        return max;
    }
};