int maxDepth(struct TreeNode* root)
{
      if(root == NULL)
        return 0;
      int left = maxDepth(root->left)+1;
      int right = maxDepth(root->right)+1;
      if(right > left)
      {
      return right;
      }
      return left;
}
