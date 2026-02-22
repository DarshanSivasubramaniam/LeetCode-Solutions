class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int temp=0;

        for(int i=0;i<t.size();i++)
        {
            if(t[i]==s[temp])
            {
                temp++;
            }
        }

        if(temp==s.size())return true;

        return false;
    }
};