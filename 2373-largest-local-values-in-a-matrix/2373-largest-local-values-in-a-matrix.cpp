class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>> result;
        int i = 0;
        int j = 0;
        int max  = 0;
        vector<int> temp;
        while(i+2<grid.size())
        {
            for(int y=i;y<=i+2;y++)
            {
                for(int x = j;x<=j+2;x++)
                {
                if (max<grid[y][x])
                    max = grid[y][x];
                }
            }
            temp.push_back(max);
            max = 0 ;
            j++;
            if(j+2>grid.size()-1)
            {
                i++;
                j = 0;
                result.push_back(temp);
                temp.clear();
            }
        }
        return result;
    }
   
};