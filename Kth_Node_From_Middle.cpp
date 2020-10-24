/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::solve(ListNode* A, int B) {
    ListNode* temp=A;
    int count=1;
    while(temp->next)
    {
        count++;
        temp=temp->next;
    }
    int val=1;
    int num=(count/2)+1-B;
    temp=A;
    while(val<num)
    {
        temp=temp->next;
        val++;
    }
    if(val==num)
    {
        return temp->val;
    }
    if(val>num)
    {
        return -1;
    }
}
