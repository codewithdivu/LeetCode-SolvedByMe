/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    
    int length(ListNode* head){
        ListNode* temp = head;
        int len=0;
        
        while(temp!=NULL){
            temp=temp->next;
            len++;
        }
        return len;
    }
    
    ListNode * getIntersectionNode(ListNode* headA, ListNode* headB)
    {
        
        ListNode* h1;
        ListNode* h2;
        
        
        int len1 = length(headA);
        int len2 = length(headB);
        
        int distance = 0;
        
        if(len1>len2){
            distance=len1-len2;
            h1 = headA;
            h2 = headB;
        }
        else{
            distance = len2-len1;
            h1 = headB;
            h2 = headA;
        }
        
        while(distance--){
            h1=h1->next;
        }
        
        while(h1!=NULL && h2!=NULL){
            if(h1==h2){
                return h1;
            }
            h1=h1->next;
            h2=h2->next;
        }
        return NULL;
    }
    
};