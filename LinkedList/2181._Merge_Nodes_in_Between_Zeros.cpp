class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode* temp = head->next;
        ListNode* newNode = new ListNode(0);
        ListNode* femp = newNode;
        
      int sum = 0;
        while(temp!=NULL){
            
            if(temp->val==0){
                femp->next = new ListNode(sum);
                femp = femp ->next;
                sum = 0;
            }
            
            sum = sum + temp->val;
            temp = temp->next;
            
            
        }  
        
        return newNode->next;
        
    }
};