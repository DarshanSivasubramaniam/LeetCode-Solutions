class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        
        int n=queries.size();
        
        for(int i=0;i<n;i++){
            int l=queries[i][0];
            int r=queries[i][1];
            int k=queries[i][2];
            int v=queries[i][3];
            int idx=l;
            while(idx<=r){
                const int MOD=1e9+7;
                nums[idx]=(1LL*nums[idx]*v)%MOD;
                idx+=k;
            }
            
        }
        int result=0;
        for(auto i:nums)
        {
             result=result^i;
        }

        return result;

    }
};