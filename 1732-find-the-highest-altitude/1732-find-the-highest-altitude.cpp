class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int result=0;
        int temp=0;

        for(int i=0;i<gain.size();i++)
        {
            temp+=gain[i];
           result=max(result,temp);
        }

        return result;
    }
};