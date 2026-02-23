class Solution {
public:
    bool isDigitorialPermutation(int n) {
        
        int num=n;

        int original=0;
        vector<int>ran;

        while(num)
        {
            int val=num%10;
            ran.push_back(val);

            long long fact=1;

            for(int i=val;i>=2;i--)
            {
                 fact*=i;
            }

            original+=fact;
            num/=10;
        }

        if(original==n)
        return true;
        
        vector<int>car;

        while(original)
        {
            car.push_back(original%10);

            original/=10;
        }

        sort(ran.begin(),ran.end());
        sort(car.begin(),car.end());

        if(ran.size()!=car.size()) return false;

        for(int i=0;i<ran.size();i++)
        {
            if(ran[i]!=car[i])
            return false;
        }
     return true;

        
    }
};