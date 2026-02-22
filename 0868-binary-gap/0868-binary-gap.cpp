class Solution {
public:
    int binaryGap(int n) {
        vector<int>result;

        while(n)
        {
            if(n%2==0)result.push_back(0);
            else result.push_back(1);

            n/=2;
        }

        int count=INT_MIN;
        int j=-1;
        bool t=false;

        for(int i=0;i<result.size();i++)
        {
            int val;
             if(result[i]==1 && j==-1)
             {
                j=i;
                continue;
             }

             if(result[i]==1)
             {
                val=i-j;
                t=true;
                
                j=i;
             }
             else continue;

             if(val>count) count=val;
        }
        
        if(!t ) return 0;

        return count;
    }
};