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
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        ListNode* curr = head;
        ListNode* current = head;
        ListNode* newNode = new ListNode(0);
        ListNode* temp = newNode;
        int count=0;
        while(curr!=NULL)
        {
            count++;
            curr=curr->next;
        }
        int lee = count-n+1;
        for(int i=1;i<=count;i++){
            if(i==lee){
                current=current->next;
                continue;
            }
            temp->next = new ListNode(current->val);
            temp=temp->next;
            current=current->next;
        }
        return newNode->next;
    }
};