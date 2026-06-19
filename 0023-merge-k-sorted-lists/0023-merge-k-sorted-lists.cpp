/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        auto cmp=[](ListNode* a, ListNode* b){
                return a->val > b->val;
        };
        
        priority_queue<ListNode*,vector<ListNode*>,decltype(cmp)>result(cmp);

        for(auto i:lists)
        {
            if(i)
            result.push(i);
        }

        ListNode* final1=nullptr, *curr=nullptr;

        while(!result.empty())
        {
            ListNode *ran=result.top();
            if(final1==nullptr)
            {
                    final1=ran;
                    curr=final1;
            }
            else
            {
                    curr->next=ran;
                    curr=curr->next;
            }

            if(ran->next)
            result.push(ran->next);


            result.pop();
        }

        return final1;
    }
};