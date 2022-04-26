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
    void Insert(struct ListNode **head, int newdata)
    {
        struct ListNode *newNode = new ListNode(newdata);
        if (*head == NULL)
            *head = newNode;
        else
        {
            struct ListNode *temp = *head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
    }
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        struct ListNode *head = NULL;
        int temp = 0, num;
        while (l1 != NULL && l2 != NULL)
        {
            num = l1->val + l2->val + temp;
            if (num > 9)
            {
                temp = num / 10;
                num = num % 10;
            }
            else
            {
                temp = 0;
            }
            Insert(&head, num);
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1 != NULL)
        {
            num = l1->val + temp;
            if (num > 9)
            {
                temp = num / 10;
                num = num % 10;
            }
            else
            {
                temp = 0;
            }
            Insert(&head, num);
            l1 = l1->next;
        }
        while (l2 != NULL)
        {
            num = l2->val + temp;
            if (num > 9)
            {
                temp = num / 10;
                num = num % 10;
            }
            else
            {
                temp = 0;
            }
            Insert(&head, num);
            l2 = l2->next;
        }
        if (temp != 0)
            Insert(&head, temp);
        return head;
    }
};