class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        
        vector<int>result(51,0);
        int final1=0;

        for(int val:nums)
        {
             result[val]++;
        }
        
        for(int i=0;i<result.size();i++)
        {
            if(result[i]==2)
            final1=final1^i;
        }

        return final1;

    }
};