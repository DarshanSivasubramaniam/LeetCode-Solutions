class Solution {
public:
    vector<string> letterCombinations(string digits) {
        unordered_map<char, string> hash = {
                                           {'2', "abc"},{'3',"def"},{'4',"ghi"},
                                           {'5',"jkl"},{'6',"mno"},{'7',"pqrs"},
                                           {'8',"tuv"},{'9',"wxyz"}};


    vector<string>result;

    for(int i=0;i<digits.size();i++)
    {
        char ch=digits[i];

        string temp;
           for(auto&[key,val]:hash)
           {
            if(key==ch)
            {
                temp=val;
            }
           }

        if(i==0)
        {
           for(auto l:temp)
           {
            result.push_back(string(1,l));
           }
        }
        else
        {
            vector<string>random;

            for(string &m:result)
            {
                string k=m;
                for(char p:temp)
                {
                    string str=k+string(1,p);
                    random.push_back(str);
                }
            }

            result=random;
        }

        }
        return result;

    


    }
};