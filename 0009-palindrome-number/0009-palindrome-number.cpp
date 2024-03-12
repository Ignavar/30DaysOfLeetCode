class Solution {
public:
    bool isPalindrome(int x) {
        string temp = to_string(x);
        for(int i =0;i<temp.size()/2;i++)
        {
            if(temp[i]!=temp[temp.size()-1-i])
                return false;
        }
        return true;
    }
};