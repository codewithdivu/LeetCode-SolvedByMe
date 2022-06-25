class Solution {
public:
    
    int length(ListNode* list){
        int count = 0;
        ListNode* ans = list;
        
        while(ans!=NULL){
            count++;
            ans=ans->next;
        }
        return count;
    }
    
    ListNode* swapNodes(ListNode* head, int k) {
        
        
        int len = length(head);
        int dis = len-k+1;
        
        ListNode* temp = head;
        ListNode* femp = head;
        
        for(int i=1;i<k;i++){
            temp=temp->next;    
        }
        
        for(int i=1;i<dis;i++){
            femp=femp->next;
        }
        int tutu = temp->val;
        temp->val = femp->val;
        femp->val = tutu;
        
        return head;
        
    }
};