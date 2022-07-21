class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        vector<int> ans;
        ListNode* temp = head;
        
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        
        sort(ans.begin(),ans.end());
        
        ListNode* newNode = new ListNode(0);
        ListNode* femp = newNode;
        
        for(int i=0;i<ans.size();i++){
            ListNode* fufu = new ListNode(ans[i]);
            femp->next = fufu;
            femp = femp->next;
        }
        return newNode->next;
    }
};