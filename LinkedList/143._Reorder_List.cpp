class Solution {
public:
    
    ListNode* reverse(ListNode* ll){
        ListNode* curr = ll;
        ListNode* prev = NULL;
        ListNode* ne;
        
        while(curr!=NULL){
            ne = curr->next;
            curr->next = prev;
            prev = curr;
            curr =  ne;
        }
        return prev;
    }
    
    void reorderList(ListNode* head) {
        
        if(head->next!=NULL && head->next->next!=NULL){
        
        
        // set something 
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* pu = dummy;
        
            
        
        // getting middle of the LL
        ListNode* temp = head;
        ListNode* p = head;
        while(p!=NULL && p->next!=NULL){
            temp=temp->next;
            pu=pu->next;
            p=p->next->next;
        }
        
            
            
        // getting revers of half LL
        ListNode* head1 = reverse(temp);
        pu->next = NULL;
        
            
            
        // ListNode* lund = head;
        // while(lund!=NULL){
        //     cout<<lund->val<<" ";
        //     lund=lund->next;
        // }
        
        
            
        // pushing all the element of reverse ll in vector
        vector<int> ans;
        ListNode* arr = head1;
        while(arr!=NULL){
            ans.push_back(arr->val);
            arr=arr->next;
        }
        
            
            
        // for(int i=0;i<ans.size();i++){
        //     cout<<ans[i]<<" ";
        // }
        
            
        
        // now setting
        int len = ans.size();
        ListNode* x = head;
        ListNode* y = dummy;
        int i=0;
        while(x!=NULL){
            ListNode* newNode = new ListNode(ans[i]);
            newNode->next = x->next;
            x->next = newNode;
            i++;
            len-=1;
            x = x->next->next;
            y=y->next->next;
        }
        
        // this is for odd
        while(len--){
            ListNode* newfond = new ListNode(ans[i]);
            y->next = newfond;
            y=y->next;
            i++;
        }
        }
    }
};