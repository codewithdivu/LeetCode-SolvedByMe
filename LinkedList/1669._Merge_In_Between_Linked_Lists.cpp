class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp = list1;
        ListNode* femp = list2;
        for(int i=1;i<a;i++){
            temp=temp->next;
        }
        ListNode* p = temp->next;
        
        int dis = (b-a)+1;
        while(dis--){
            p=p->next;
        }
        ListNode* q = list2;
        while(q->next!=NULL){
            q=q->next;
        }
        
        temp->next = femp;
        q->next = p;
        return list1;
    }
};