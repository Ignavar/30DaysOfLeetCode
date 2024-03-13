class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int range = nums.size();
        int sum = 0;
        for(int i=0;i<range;i++) {   
            sum+=i;
            sum-=nums[i];
        }
        sum+=range;
        return sum;
    }
};