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
    ListNode* partition(ListNode* head, int x) {
      ListNode* temp = head;
    
        ListNode* newFirst = new ListNode(0);
        ListNode* newSecond = new ListNode(0);
        
        ListNode* first = newFirst;
        ListNode* pelu = newFirst;
        ListNode* second = newSecond;
        ListNode* bijo = newSecond;
        
        
        while(temp!=NULL){
            if(temp->val<x){
                first->next = new ListNode(temp->val);
                temp=temp->next;
                first=first->next;
            }
            else{
                second->next = new ListNode(temp->val);
                temp=temp->next;
                second=second->next;
            }
        }
        first->next = bijo->next;
        return pelu->next;
    }
};