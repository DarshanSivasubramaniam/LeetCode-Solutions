class Solution {
public:
    char findKthBit(int n, int k) {
        
        string str="0";

        if(n==1)
        {
            return str[k-1];
        }

        for(int i=0;i<n-1;i++)
        {
                string temp="";
                temp+='1';
                for(int j=str.size()-1;j>=0;j--)
                {
                    if(str[j]=='0')
                    temp+='1';
                    else
                    temp+='0';
                }
               
                str+=temp;
        }
        
        return str[k-1];
    }
};