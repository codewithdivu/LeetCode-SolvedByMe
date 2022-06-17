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
class Solution
{
public:
    int getDecimalValue(ListNode* head) 
    {
        ListNode* temp = head;
        vector<int> v;
        
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int n = v.size();
        
        int ans = 0;
        int x = 1;
        reverse(v.begin(),v.end());
        for(int i=0;i<n;i++){
            ans=ans+(x*v[i]);
            x=x*2;
        }
        return ans;
    }
};