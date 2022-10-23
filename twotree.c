# include "tree.h"
void BinaryTreePrevOrder(BTNode* root)
{
    if(root == NULL)
     return ;
    printf("%d",root->data);
    BinaryTreePrevOrder(root->left);
    BinaryTreePrevOrder(root->right);
      
}
// 二叉树中序遍历
void BinaryTreeInOrder(BTNode* root)
{
    if(root == NULL)
     return ;
    BinaryTreePrevOrder(root->left);
    printf("%d",root->data);
    BinaryTreePrevOrder(root->right);
}
// 二叉树后序遍历
void BinaryTreePostOrder(BTNode* root)
{
    if(root == NULL)
    return ;
    BinaryTreePrevOrder(root->left);
    BinaryTreePrevOrder(root->right);
    printf("%d",root->data);
}
int BinaryTreeSize(BTNode* root)
{
	return root == NULL ? 0 :
		BinaryTreeSize(root->left) + TreeSize(root->right) + 1;
}

// 二叉树叶子节点个数
int BinaryTreeLeafSize(BTNode* root)
{
    if(root == NULL)
    { 
        return 0;
    }
    if(root->left == NULL &&root->right == NULL)
    {
        return 1;
    }
    return Bi
