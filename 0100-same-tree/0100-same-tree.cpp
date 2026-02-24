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
     void func(TreeNode* p, TreeNode* q,bool &result)
     {
         if(p==nullptr || q==nullptr)
         {
            if(p!=q)
            result=false;

            return;
         }

        if(p->val!=q->val)
        result=false;

        func(p->left,q->left,result);
        func(p->right,q->right,result);

     }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool result=true;
        func(p,q,result);

        return result;
    }
};