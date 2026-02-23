class Solution {
public:
    bool hasAllCodes(string s, int k) {
        
        int n=s.size();

        unordered_set<string>result;

        for(int i=0;i<=n-k;i++)
        {
            string str="";
             int temp=i;
            for(int j=0;j<k;j++)
            {
                str+=s[temp];
                temp++; 
            }  
            result.insert(str);
        }

        if(result.size()==pow(2,k))
        return true;

        return false;
    }
};