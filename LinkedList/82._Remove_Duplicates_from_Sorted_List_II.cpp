class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* femp = dummy;
        
        while(head!=NULL){
            
            if(head->next!=NULL && head->val == head->next->val){
                
                while(head->next!=NULL && head->val == head->next->val){
                    head = head ->next;
                }
                
                femp -> next = head->next;
                
            }
            else{
                femp = femp->next;
            }
            head=head->next;
            
        }
        return dummy->next;
    }
};