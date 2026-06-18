class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>>result;
        vector<vector<string>>final1;
        for(int i=0;i<strs.size();i++)
        {
            string temp=strs[i];

            sort(temp.begin(),temp.end());

            if(result.find(temp)!=result.end())
            {
                result[temp].push_back(strs[i]);
            }
            else
            {
                result[temp]={strs[i]};
            }
        }

        for(auto i:result)
        {
            final1.push_back(i.second);
        }

        return final1;
    }
};