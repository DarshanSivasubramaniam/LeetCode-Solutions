class Solution {
public:

    void func(int a,int b,int n,string str,vector<string>&result)
    {
         if(str.size()==2*n)
         {
            result.push_back(str);
            return;
         }

         if(a<=n)
         {
            func(a+1,b,n,str+"(",result);
         }

         if(b<a-1)
         {
             func(a,b+1,n,str+")",result);
         }
    }

    vector<string> generateParenthesis(int n) {
        vector<string>result;

        func(1,0,n,"",result);
        return result;
    }
};