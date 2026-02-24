class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        
        int n=words.size();
         vector<string>result;
         bool temp;

         if(groups[0]==1)
         temp=true;
         else
         temp=false;

        result.push_back(words[0]);
        
        for(int i=1;i<n;i++)
        {
           if(groups[i]!=temp)
           {
            result.push_back(words[i]);
            temp=!temp;
           }
        }

        return result;
    }
};