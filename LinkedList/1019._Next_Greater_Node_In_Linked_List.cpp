class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        ListNode* temp = head;
        
        while(temp!=NULL){
            ListNode* femp = temp->next;
            bool itHas = false;
            while(femp!=NULL){
                if(temp->val<femp->val){
                    ans.push_back(femp->val);
                    itHas = true;
                    break;
                }
                femp=femp->next;
            }
            if(itHas==false){
                ans.push_back(0);
            }
            temp=temp->next;
        }
        return ans;
    }
};