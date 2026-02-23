class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n=cost.size();

        vector<int>result(n);

        result[0]=cost[0];
        result[1]=cost[1];

        for(int i=2;i<n;i++)
        {
            int val=(result[i-1]>result[i-2])?result[i-2]:result[i-1];
            result[i]=cost[i]+val;
        }

        if(result[n-1]>result[n-2])
          return result[n-2];

          return result[n-1];

    }
};