/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

     void calc(string &str,int &result)
     {
          int num=0;

          for(char ch:str)
          {
            num=num*2+(ch-'0');
            cout<<ch;
          }
          cout<<endl;
          result+=num;
     }
    
    void func(TreeNode* root,string str,int &result)
    {

          if(root==nullptr)
          return;

          str+=to_string(root->val);
        if(root->left==nullptr && root->right==nullptr)
        {
            calc(str,result);
            return;
        }

        func(root->left,str,result);

        func(root->right,str,result);


    }


    int sumRootToLeaf(TreeNode* root) {
        int result=0;
        string str="";

        func(root,str,result);

        return result;
    }
};