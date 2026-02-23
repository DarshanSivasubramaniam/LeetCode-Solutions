class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();

        int val=0;
        int finall=-1;

        queue<pair<int,int>>result;

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==2)
                result.push({i,j});

                else if(grid[i][j]==1)
                val++;
            }
        }

        vector<vector<int>>index={{0,1},{1,0},{-1,0},{0,-1}};

        while(!result.empty())
        {
             int s=result.size();

             for(int i=0;i<s;i++)
             {
                auto[a,b]=result.front();
                result.pop();

                for(int j=0;j<4;j++)
                {
                    int r1=index[j][0]+a;
                    int c1=index[j][1]+b;

                    if(r1>=m || c1>=n || r1<0 || c1<0 || grid[r1][c1]==0 || grid[r1][c1]==2)
                    continue;

                    grid[r1][c1]=2;
                    result.push({r1,c1});
                    val--;
                }

             }

            finall++;
        }

        if(val==0) return finall;

        return -1;
     }
};