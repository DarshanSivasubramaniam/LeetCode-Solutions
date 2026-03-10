class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int temp=0;
        int count=0;

        for(int val:nums)
        {
            if(count==0)
            temp=val;

            if(val==temp)
            count++;
            else
            count--;
        }

        return temp;
    }

};