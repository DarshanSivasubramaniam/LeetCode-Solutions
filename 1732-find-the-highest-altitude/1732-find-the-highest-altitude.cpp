class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int result=0;

        for(int i=0;i<gain.size();i++)
        {
            if(i>0)
            gain[i]=gain[i]+gain[i-1];
            else
            gain[i]=gain[i]+result;

            if(gain[i]>result)
            result=gain[i];

            cout<<gain[i]<<" ";
        }

        return result;
    }
};