class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        
        int n=nums.size();

        int odd=0,even=0,result=0;

        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            even+=nums[i];
            else
            odd+=nums[i];
        }

        int a=0,b=0;

        for(int i=0;i<n;i++)
        {
            int oddtemp=odd;
            int eventemp=even;

            if(i%2==1)
            {
                
                oddtemp-=nums[i];
                 if(b+oddtemp-a==a+eventemp-b)
                 result++;
 
                a+=nums[i];
            }
            else
            {
                eventemp-=nums[i];
                if(b+oddtemp-a==a+eventemp-b)
                result++;

                b+=nums[i];
            }
        }
        return result;
    }
};