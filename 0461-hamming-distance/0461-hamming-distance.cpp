class Solution {
public:
    int hammingDistance(int x, int y) {
        
        int num=x^y;
        int result=0;

        while(num>0)
        {
            if(num&1)
            {
                result++;
            }
            
            num>>=1;

        }

        return result;
    }
};