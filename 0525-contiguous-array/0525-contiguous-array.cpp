class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        int result=0;
        int sum=0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            sum=sum-1;
            else
            sum+=nums[i];

            if(sum==0)
            {
                result=(result<i+1)?i+1:result;
            }

            if(mp.find(sum)!=mp.end())
            {
                result=(result<i-mp[sum])?i-mp[sum]:result;
            }

            if(mp.find(sum)==mp.end())
            mp[sum]=i;

            // cout<<sum<<" "<<i<<endl;
        }

        return result;
    }
};