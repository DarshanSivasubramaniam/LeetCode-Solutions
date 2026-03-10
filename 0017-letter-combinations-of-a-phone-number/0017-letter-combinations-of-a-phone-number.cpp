class Solution {
public:
       void func(int index,string &digits,string str,unordered_map<char,string>mp,vector<string>&result)
       {
           if(str.size()==digits.size())
           {
            result.push_back(str);
            return;
           }

           string letters=mp[digits[index]];

           for(char c:letters)
           {
               func(index+1,digits,str+c,mp,result);

           }
       }


    vector<string> letterCombinations(string digits) {
        unordered_map<char,string>mp={{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};
        vector<string>result;

        func(0,digits,"",mp,result);
        return result;
    }
};