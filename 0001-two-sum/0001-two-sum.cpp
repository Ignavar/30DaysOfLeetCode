class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i =0;i<nums.size();i++)
        {
            for(int y=i+1;y<nums.size();y++)
            {
                if(nums[i]+nums[y]==target)
                {
                    ans.push_back(i);
                    ans.push_back(y);
                    return ans;
                }
            }
        }
        return ans;
    }
};