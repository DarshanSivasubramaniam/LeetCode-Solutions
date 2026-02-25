class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        
        int n=arr.size();

        vector<pair<int,int>>result;

        vector<int>final1;

        for(int i=0;i<n;i++)
        {
            int val=arr[i];
            int count=0;
             while(val)
             {
                 if(val%2==1)
                 count++;

                 val/=2;

             }

             result.push_back({arr[i],count});
        }

        sort(result.begin(),result.end(),[](pair<int,int> &a, pair<int,int> &b)
        {
             if(a.second==b.second)
             return a.first<b.first;

             return a.second<b.second;
        });

       for(auto &[key,value]:result)
       {
        final1.push_back(key);
       }

       return final1;
        
    }
};