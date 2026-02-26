class Solution {
public:
    int numSteps(string s) {

        int count=0;

        bool chk=true;


        while(s.size()>1)
        {
            cout<<s<<" ";
            string temp="";
            count++;

            if(s[s.size()-1]=='1')
             chk=false;
             else
             chk=true;
            

             if(chk==false)
             {
                 bool var=false;
                 int idx;
                 for(int i=0;i<s.size();i++)
                 {
                     if(s[i]=='0')
                     {
                         var=true;
                         idx=i;
                     }
                 }
                 
                 if(var==true)
                 {
                  
                   for(int i=0;i<idx;i++)
                    {
                      temp+=s[i];
                    }
                   for(int i=idx;i<s.size();i++)
                    {
                       if(s[i]=='0')
                       temp+="1";
                       else
                       temp+="0";
                    }
                 }
                 else
                 {
                     temp+="1";
                     for(int i=0;i<s.size();i++)
                     {
                     temp+="0";    
                     }
                 }
             }
             else
             {
                  temp=s;
                  temp.erase(temp.size()-1,1);
             }

             s=temp;
        }

           return count;
    }
};