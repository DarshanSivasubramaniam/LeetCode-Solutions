class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        
        priority_queue<vector<int>>pq;
        vector<vector<int>>result;

        for(int i=0;i<points.size();i++)
        {
            int val = points[i][0]*points[i][0] + points[i][1]*points[i][1];
            pq.push({val,points[i][0],points[i][1]});
        }

        while(pq.size()>k)
        {
            pq.pop();
        }

        vector<vector<int>>final1;
        while(!pq.empty())
        {
            final1.push_back({pq.top()[1],pq.top()[2]});
            pq.pop();
        }

        return final1;



    }
};