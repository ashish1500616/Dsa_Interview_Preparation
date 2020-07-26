// https://leetcode.com/problems/merge-two-sorted-lists/
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

/* ---------------------------------------------------------------- */
/* -------------------------- Iterative . -------------------------- */

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *head = new ListNode(0);
        ListNode *current = head;
        while (l1 and l2)
        {
            if (l1->val <= l2->val)
            {
                current->next = l1;
                l1 = l1->next;
            }
            else
            {
                current->next = l2;
                l2 = l2->next;
            }
            current = current->next;
        }
        if (l1!=nullptr)
        {
            current->next = l1;
        }
        else
        {
            current->next = l2;
        }

        return head->next;
    }
};

//TODO : ADD Code For Recursion .
/* ---------------------------------------------------------------- */
/* -------------------------- RECURSION -------------------------- */


