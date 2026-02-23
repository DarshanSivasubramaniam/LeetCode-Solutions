class Solution {
public:
    int maxRepeating(string sequence, string word) {
       int n=sequence.size();
       int s=word.size();

       if(sequence==word) return 1;

       int count=0;
       

      for(int i=0;i<n;i++)
      {
        int c=0;
        int temp=i;

        while(temp<n)
        {
            string str=sequence.substr(temp,s);

            if(str==word)
            {
                c++;
                temp+=s;

                if(c>count)
                count=c;
            }
            else
            {
                break;
            }

        }
      }

      return count;
    
    }
};