class Solution {
public:
    int maxNumberOfBalloons(string text) {
        
        unordered_map<char,int>result;
        vector<int>temp;
        int count=0;
        int b=0,a=0,l=0,o=0,n=0;


        for(char i:text)
        {
            if(i=='b'||i=='a'||i=='l'||i=='l'||i=='o'||i=='o'||i=='n')
            {
                result[i]++;
            }   
        }

        for(auto i:result)
        {
            int val=i.second;
            if(i.first=='b') b+=val;
            if(i.first=='a') a+=val;
            if(i.first=='l') l+=val;
            if(i.first=='o') o+=val;
            if(i.first=='n') n+=val;
        }

        l=l/2;
        o=o/2;

        temp.push_back(b);
        temp.push_back(a);
        temp.push_back(l);
        temp.push_back(o);
        temp.push_back(n);

        return *min_element(temp.begin(),temp.end());
       
    }
};