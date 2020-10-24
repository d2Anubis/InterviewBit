/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
    int c1=0,c0=0,count=1,c;
    ListNode* temp=A;
    while(temp!=NULL)
    {
        if(temp->val==0)
        {
            c0+=1;
        }
        else
        {
            c1+=1;
        }
        temp=temp->next;
        count++;
    }
    temp=A;
    c=0;
    while(c<c0)
    {
        temp->val=0;
        temp=temp->next;
        c++;
    }
    while(temp!=NULL)
    {
        temp->val=1;
        temp=temp->next;
    }
    return A;
}
