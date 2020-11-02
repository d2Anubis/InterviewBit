/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
void mirror(TreeNode* A)
{
    if(!A)
    {
        return;
    }
    else
    {
        TreeNode* temp=NULL;
        mirror(A->left);
        mirror(A->right);
        temp=A->right;
        A->right=A->left;
        A->left=temp;
    }
}
TreeNode* Solution::invertTree(TreeNode* A) {
    mirror(A);
    return A;
}
