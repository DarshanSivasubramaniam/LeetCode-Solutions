class Solution {
public:
    string reorganizeString(string s) {
        int n=s.size();
        unordered_map<char,int>mp;
        priority_queue<pair<int,char>>pq;
        string str="";

        for(char ch:s)
        mp[ch]++;

        for(auto i:mp)
        {
            if(i.second > (n+1)/2)
            return str;
        }

        for(auto i:mp)
        {
            pq.push({i.second,i.first});
        }

        while(pq.size()>=2)
        {
            char ch1=pq.top().second;
            int val1=pq.top().first;

            pq.pop();

            char ch2=pq.top().second;
            int val2=pq.top().first;

            pq.pop();

            str+=ch1;
            str+=ch2;

            val1--;
            val2--;

            if(val1>0) pq.push({val1,ch1});
            if(val2>0) pq.push({val2,ch2});
        }

        if(!pq.empty())
        {
            str+=pq.top().second;
        }
       

        return str;
        
    }
};