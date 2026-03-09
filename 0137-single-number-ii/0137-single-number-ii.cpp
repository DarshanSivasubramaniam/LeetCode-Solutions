class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int result=0;

        for(int i=0;i<32;i++)
        {
            int count=0;

            for(int val:nums)
            {
                if((1<<i)&val)
                count++;
            }

            if(count%3)
            result=(1<<i) | result;
        }

        return result;
    }
};