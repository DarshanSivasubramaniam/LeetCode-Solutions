class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();

        vector<vector<int>>result(m,vector<int>(n,0));
        vector<vector<int>>queueing;

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]==0)
                {
                    queueing.push_back({i,j});
                }                
            }
        }

        int s=queueing.size();

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int dis=INT_MAX;
                if(mat[i][j]==0)
                {
                   continue;
                }  
                for(int k=0;k<s;k++)
                {
                    int a=queueing[k][0]-i;
                    int b=queueing[k][1]-j;

                    int val=abs(a)+abs(b);
                    if(val<dis)
                    dis=val;
                }   

                result[i][j]=dis;           
            }
        }

        return result;
    }
};