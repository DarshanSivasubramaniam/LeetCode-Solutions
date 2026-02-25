class Solution {
public:
    int passThePillow(int n, int time) {
      

        int temp=1;
        bool car=true;

        for(int i=1;i<=time;i++)
        {
            if(temp<n && car==true)
            {
                temp++;
                car=true;
            }
            else
            {
                car=false;
                 temp--;
                 if(temp<=1)
                 {
                   temp=1;
                   car=true;
                 }

            }
            
        }

        return temp;

        
    }
};