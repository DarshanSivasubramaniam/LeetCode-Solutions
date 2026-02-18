class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        
        int n=matrix.size();

        for(int i=0;i<n;i++)
        {
            vector<bool>result(n);
            vector<bool>result2(n);
          for(int j=0;j<n;j++)
          {
               int val=matrix[i][j];

              result[val-1]=true;
         }

         for(auto p:result)
         {
            if(p==false)
            return false;
         }



         for(int k=0;k<n;k++)
         {
            int val=matrix[k][i];

            result2[val-1]=true;
         }

           for(auto p:result2)
         {
            if(p==false)
            return false;
         }


        }

        return true;
    }
};