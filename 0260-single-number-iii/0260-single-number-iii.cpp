class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
       
       long long result=0;
       int n=nums.size();

       for(int i=0;i<n;i++)
       {
            result=result^nums[i];
       }

       long long minval=result & (result-1);
       result=minval^result;

       int a=0,b=0;

       for(int i=0;i<n;i++)
       {
          if(nums[i] & result)
          a=a^nums[i];
          else
          b=b^nums[i];
        }
     return {a,b};

    }
};