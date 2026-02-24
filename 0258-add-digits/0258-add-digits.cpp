class Solution {
public:
    int addDigits(int num) {
        
        while(num>9)
        {
            int n=num;
            int sum=0;
            while(n)
            {
                int val=n%10;
                sum+=val;
                n/=10;
            }
            num=sum;
        }

        return num;
    }
};