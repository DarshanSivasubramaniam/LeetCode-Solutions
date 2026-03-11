class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        int num= n;
        int count=0;

        while(num>0) 
        {
            count++;
            num/=2;
        }

        int result=n^((1<<count)-1);

        return result;
    }
};
