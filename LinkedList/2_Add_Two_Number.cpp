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
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *t1 = l1;
        ListNode *t2 = l2;
        int carry = 0;
        int sum;
        ListNode *newNode = new ListNode(0);
        ListNode *temp = newNode;

        while (t1 || t2 || carry)
        {
            sum = 0;
            if (t1)
            {
                sum = sum + t1->val;
                t1 = t1->next;
            }
            if (t2)
            {
                sum += t2->val;
                t2 = t2->next;
            }
            sum = sum + carry;

            temp->next = new ListNode(sum % 10);
            carry = sum / 10;
            temp = temp->next;
        }
        return newNode->next;
    }
};