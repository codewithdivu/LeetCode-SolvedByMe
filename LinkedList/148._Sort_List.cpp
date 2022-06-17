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
    ListNode* sortList(ListNode* head) {
        vector<int> arr;
        ListNode* temp = head;
        ListNode* newNode = new ListNode(0);
        ListNode* p = newNode;
        
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<arr.size();i++){
            p->next = new ListNode(arr[i]);
            p=p->next;
        }
        
        return newNode->next;
    }
};