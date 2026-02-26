class Solution {
public:
    int minMoves(int target, int maxDoubles) {

       stack<int>result; 
    int car=target;

        for(int i=0;i<maxDoubles;i++)
        {
            if(target>0)
            {
              int val=target/2;
              result.push(val);
              target=target/2;
            }
            else
            {
                break;
            }
        }
        
        target=car;

    
    int count=0;
    int val=1;
    
    while(val<target)
    {
        int st=-1;
        
        if(result.empty())
        st=-1;
        
        if(!result.empty())
        {
            st=result.top();
            result.pop();
        }
        
        
        
        if(val<st && st!=-1)
        {
           int t=st-val;
           val+=t;
           count+=t;
            if(val==target) break;
            if(val>target) 
            {
                int q=val-target;
                count-=q;
                break;
            }

        }
        
        if(st==-1)
        {
            int t=target-val;
            count+=t;
            break;
        }
        
        if(val==st && st!=-1)
        {
            val=val*2;
            count++;
        }
        if(val==target) break;
    }

    return count;
    }
};