class Solution
{
public:
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {

        vector<int> ans;

        for (int i = 0; i < lists.size(); i++)
        {

            ListNode *temp = lists[i];

            while (temp != NULL)
            {
                ans.push_back(temp->val);
                temp = temp->next;
            }
        }

        sort(ans.begin(), ans.end());

        ListNode *newNode = new ListNode(0);
        ListNode *femp = newNode;

        for (int j = 0; j < ans.size(); j++)
        {
            ListNode *navoNode = new ListNode(ans[j]);
            femp->next = navoNode;
            femp = femp->next;
        }
        return newNode->next;
    }
};