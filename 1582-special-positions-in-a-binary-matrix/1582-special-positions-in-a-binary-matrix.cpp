class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();

        int count=0;

        

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                bool temp=false;
                if(mat[i][j]==1)
                {
                    for(int q=0;q<n;q++)
                    {
                        if(mat[i][q]==1 && j!=q)
                        {
                            temp=true;
                            break;
                        }
                    }

                    if(!temp)
                   {
                    for(int w=0;w<m;w++)
                    {
                        if(mat[w][j]==1 && i!=w)
                        {
                            temp=true;
                            break;
                        }
                    }
                   }
                   if(!temp) count++;

                }
                
            }
        }

        return count;
    }
};