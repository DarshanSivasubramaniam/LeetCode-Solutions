class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        
        int m=grid.size();
        int n=grid[0].size();

        vector<vector<int>>result(m,vector<int>(n,0));

         vector<vector<int>>row;
         
         vector<vector<int>>col;

        
        for(int i=0;i<m;i++)
        {
            int a=0;
            int b=0;
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                a++;
                else
                b++;
            }
            row.push_back({a,b});
        }

        for(int j=0;j<n;j++)
        {
            int a=0;
            int b=0;
            for(int i=0;i<m;i++)
            {
                if(grid[i][j]==1)
                a++;
                else
                b++;
            }
            col.push_back({a,b});
        }

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int ones=0;
                int zeros=0;

                ones+=row[i][0];
                ones+=col[j][0];
                zeros+=row[i][1];
                zeros+=col[j][1];

                result[i][j]=ones-zeros;
            }
        }

        return result;
    }
};