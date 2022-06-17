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
    ListNode* removeElements(ListNode* head, int val) {
        
        if(head==NULL){
            return head;
        }
        
        ListNode* curr = head;
        ListNode* newNode = new ListNode(0);
        ListNode* temp = newNode;
        
        while(curr!=NULL){
            if(curr->val!=val){
                temp->next = new ListNode(curr->val);
                temp=temp->next;
            }
            curr=curr->next;
        }
        return newNode->next;
    }
};