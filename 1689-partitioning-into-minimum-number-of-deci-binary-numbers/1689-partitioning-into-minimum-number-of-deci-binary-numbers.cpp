class Solution {
public:
    int minPartitions(string n) {
        int result=INT_MIN;

        for(auto i:n)
        {
            result=(result>i-'0')?result:i-'0';\

        }

        return result;
    }
};