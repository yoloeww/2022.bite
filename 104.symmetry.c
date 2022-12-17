bool dfs(struct TreeNode* left,struct TreeNode *right)
{
    if(right == NULL && left == NULL)
    return true;
    else if(right == NULL || left ==NULL)
    return false;
    else if(right -> val != left -> val)
    return false;

    return dfs(left->left , right->right) && dfs(left->right , right->left);
}
bool isSymmetric(struct TreeNode* root)
{
     if(root == NULL)
     return true;
     return dfs(root->left,root->right);
}
