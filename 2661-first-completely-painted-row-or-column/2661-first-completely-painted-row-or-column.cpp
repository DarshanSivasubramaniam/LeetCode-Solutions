class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();

        unordered_map<int,pair<int,int>>result;

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                result[mat[i][j]]={i,j};
            }
        }

        vector<int>r(m);
        vector<int>c(n);

        for(int i=0;i<arr.size();i++)
        {
            int val=arr[i];

            int a=result[val].first;
            int b=result[val].second;

            r[a]++;
            c[b]++;

            if(r[a]==n || c[b]==m)
            {
                return i;
            }

        }
    return 0;
    }
};