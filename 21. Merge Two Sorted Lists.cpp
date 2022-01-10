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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        struct ListNode *temp = new ListNode(0), *head = new ListNode(0);
        int flag = 0;
        if (list1 == NULL && list2 == NULL)
        {
            return NULL;
        }
        else if (list1 == NULL)
        {
            return list2;
        }
        else if (list2 == NULL)
        {
            return list1;
        }
        while (list1 != NULL && list2 != NULL)
        {
            if (list1->val < list2->val)
            {
                if (flag == 0)
                {
                    head = list1;
                    temp = head;
                }
                else
                {
                    temp->next = list1;
                    temp = temp->next;
                }
                list1 = list1->next;
            }
            else
            {
                if (flag == 0)
                {
                    head = list2;
                    temp = head;
                }
                else
                {
                    temp->next = list2;
                    temp = temp->next;
                }
                list2 = list2->next;
            }
            flag=1;
        }
        while (list1!=NULL)
        {
            temp->next=list1;
            temp=temp->next;
            list1=list1->next;
        }
        while (list2!=NULL)
        {
            temp->next=list2;
            temp=temp->next;
            list2=list2->next;
        } 
        return head;
    }
};