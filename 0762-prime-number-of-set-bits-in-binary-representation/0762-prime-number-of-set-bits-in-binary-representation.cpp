class Solution {
public:

    bool isprime(int n)
     {
         if(n<2) return false;

        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0) return false;
        }
        
        return true;
     }

   
    int countPrimeSetBits(int left, int right) {
        int result=0;
        for(int i=left;i<=right;i++)
        {
            int temp=i;
            int count=0;
            while(temp)
            {
                if(temp%2==1) count++;
                temp/=2;
            }
           bool check=isprime(count);

           if(check)result++;

        }

        return result;
    }
};