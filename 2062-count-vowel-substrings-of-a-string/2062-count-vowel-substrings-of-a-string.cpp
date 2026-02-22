class Solution {
public:
    int countVowelSubstrings(string word) {
        
        int n=word.size();
        int count=0;
        for(int i=0;i<=n-5;i++)
        {
            unordered_set<int>temp;
            for(int j=i;j<n;j++)
            {
                 if(word[j]=='a' || word[j]=='e' || word[j]=='i' || word[j]=='o' || word[j]=='u')
                 {
                    temp.insert(word[j]);
                 }
                 else break;

                 if(temp.size()==5)
                 {
                    count++;
                 }
            }
        }

        return count;
    }
};