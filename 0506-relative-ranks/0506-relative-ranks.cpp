class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int range = *max_element(score.begin(),score.end());
        vector<int> count(range+1,0);
        for(int i =0;i<score.size();i++)
            count[score[i]]++;
        for(int i=count.size()-1;i>=1;i--)
            count[i-1] += count[i];
        vector<string> result;
        int count1 = 4;
        for(int i =0;i<score.size();i++)
        {
            if(count[score[i]]==1)
                result.push_back("Gold Medal");
            else if(count[score[i]]==2)
                result.push_back("Silver Medal");
            else if(count[score[i]]==3)
                result.push_back("Bronze Medal");
            else
                result.push_back(to_string(count[score[i]]));
            count[score[i]]--;
        }
        return result;
    }
};