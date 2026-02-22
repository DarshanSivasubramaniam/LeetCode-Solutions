class Solution {
public:
    int tribonacci(int n) {

        if(n==0) return 0;
        if(n<=2) return 1;
        
        int zero=0;
        int one=1;
        int two=1;

        int result;
        
        for(int i=3;i<=n;i++)
        {
              result=zero+one+two;

              zero=one;
              one=two;
              two=result;
        }

      
        return result;
    }
};