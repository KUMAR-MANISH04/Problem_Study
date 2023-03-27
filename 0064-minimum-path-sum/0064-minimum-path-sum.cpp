class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(!(i==0&&j==0))
                {
                int x=INT_MAX,y=INT_MAX;
                if(i-1>=0)
                x=grid[i-1][j];
                if(j-1>=0)
                y=grid[i][j-1];

                grid[i][j]+=min(x,y);
                }
            }
        }
        return grid[grid.size()-1][grid[0].size()-1];
    }
};