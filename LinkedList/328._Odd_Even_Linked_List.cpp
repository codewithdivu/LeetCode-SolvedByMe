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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* newOdd = new  ListNode(0);
        ListNode* newEven = new ListNode(0);
        
        ListNode* even = newEven;
        ListNode* beki = newEven;
        
        ListNode* odd = newOdd;
        ListNode* eki = newOdd;
        
        ListNode* temp = head;
        
        int count=1;
        while(temp!=NULL){
            if(count%2==0){
                even->next = new ListNode(temp->val);
                even=even->next;
            }
            else{
                odd->next = new ListNode(temp->val);
                odd=odd->next;
            }
            temp=temp->next;
            count++;
        }
        odd->next = beki->next;
        return eki->next;
    }
};