class Solution {
public:
    int countBinarySubstrings(string s) {

    int n=s.size();
    int count=0; 
     for(int i=0;i<n-1;i++)
     {
        if(s[i]==s[i+1])
        continue;

        int a=i;
        int b=i+1;

        int aval=s[i];
        int bval=s[i+1];

         while(a>=0 && b<n && s[a]==aval && s[b]==bval)
         {
            count++;
            a--;
            b++;
         }

     }

     return count;
    }
};