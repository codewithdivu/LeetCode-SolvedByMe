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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* p = list1;
        ListNode* q = list2;
        ListNode* dummy = new ListNode(4);
        ListNode* r = dummy;
        while(p!=NULL && q!=NULL){
            
            if(p->val<=q->val){
                r->next  = new ListNode(p->val);
                p=p->next;
                r=r->next;
            }
            else{
                r->next = new ListNode(q->val);
                q = q->next;
                r=r->next;
            }
        }
        while (p != NULL)
        {
        r->next = new ListNode(p->val);
        p = p->next;
        r = r->next;
        }
        while (q != NULL)
        {
        r->next = new ListNode(q->val);
        q = q->next;
        r = r->next;
        }
        
        return dummy->next;
    }
};