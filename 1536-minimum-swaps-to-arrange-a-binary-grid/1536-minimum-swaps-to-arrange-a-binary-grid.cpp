class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        
        int n=grid.size();
         bool car=true;
         
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(grid[i][j]!=0)
                {
                    car=false;
                    break;
                }
            }
            
        }

        if(car)return 0;

        vector<vector<int>>result;
        vector<bool>temp(n);
        temp[0]=true;

        int count=0;

        for(int i=0;i<n;i++)
        {
            int val=0;
            for(int j=n-1;j>=0;j--)
            {
                 if(grid[i][j]==0)
                 {
                    val++;
                 }
                 else
                 {
                     result.push_back({val,i});

                    if(val>=1 && val<n)
                    temp[val]=true;
                     break;
                 }
            }
        }

        // for(int i=0;i<temp.size();i++)
        // {
        //     if(temp[i]==false)
        //     {
        //         return -1;
        //     }
        // }

        int chk=n-1;

         for(auto i:result)
        {
            cout<<i[0]<<" "<<i[1]<<endl;
        }

        for(int i=0;i<n-1;i++)
        {
            cout<<"bye";
                   int a=result[0][0];
                   
            bool sample=false;
            for(int tp=0;tp<result.size();tp++)
            {
                if(result[tp][0]>=chk)
                {
                    int g=result[tp][1]-i;
                    count+=g; 
                    result[tp][0]=a;
                    sample=true;
                    break;  
                }
                int qwer=result[tp][0];
                result[tp][0]=a;
                a=qwer;
            }
            if(!sample) return -1;
            chk--;
            result.erase(result.begin());

        }
        cout<<"------------";

     for(auto i:result)
        {
            cout<<i[0]<<" "<<i[1]<<endl;
        }

       

        return count;
    }
};