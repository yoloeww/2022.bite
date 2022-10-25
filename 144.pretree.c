int treesize(struct TreeNode *root)
{
       if(root == NULL)
          return 0;
       return treesize(root->left)+treesize(root->right)+1;
}
void preorder(struct TreeNode* root,int *a,int *pi)
{
       if(root == NULL)
          return NULL;
       a[*pi] = root->val;
       printf("a[%d]=%d",*pi,a[*pi]);
       (*pi)++;
       preorder(root->left,a,pi);
       preorder(root->right,a,pi);
}
int* preorderTraversal(struct TreeNode* root, int* returnSize)
{
       int n = treesize(root);
       printf("size:%d\n",n);
       int *a = (int *)malloc(sizeof(int)*n);
       int i = 0;
       preorder(root,a,&i);
       *returnSize = n;
       return a;

}
