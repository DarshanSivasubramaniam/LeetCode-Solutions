class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        
        set<pair<int,int>>storage;

        for(auto &i:obstacles)
        {
            storage.insert({i[0],i[1]});
        }

        int a=0,b=0;
        int dir=0;
        int maxiresult=0;

        vector<vector<int>>result={{0,1},{1,0},{0,-1},{-1,0}};

        for(auto &obj:commands)
        {
            if(obj==-1)
            {
               dir=(dir+1)%4;
            }
            else if(obj==-2)
            {
                dir=(dir+3)%4;
            }
            else
            {
              for(int j=0;j<obj;j++)
              {
                 int tempa=a+result[dir][0];
                 int tempb=b+result[dir][1];

                 if(storage.count({tempa,tempb})) break;

                 a=tempa;
                 b=tempb;
              }

              maxiresult=max(maxiresult,a*a+b*b);
            }
        }
        return maxiresult;
    }
};