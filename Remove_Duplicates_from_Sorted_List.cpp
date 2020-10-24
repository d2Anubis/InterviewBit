/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* temp=NULL;
    if(A==NULL || A->next==NULL)
    {
        return A;
    }
    temp=A;
    while(temp->next)
    {
        if(temp->val==temp->next->val)
        {
            if(temp->next->next)
            {
                temp->next=temp->next->next;
            }
            else
            {
                temp->next=NULL;
                return A;
            }
            
        }
        else
        {
            temp=temp->next;
        }
    }
    return A;
}
