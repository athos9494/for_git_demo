#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
typedef struct node
{
    int data;
    struct node *l;
    struct node *r;
}TreeNode;
//往二叉树中插入数据
TreeNode *inserttree(TreeNode *root,int data)
{
    TreeNode *node = (TreeNode *)malloc(sizeof(TreeNode));//构造要插入的结点node
    node->data = data;
    node->l = NULL;
    node->r = NULL;
    if (root == NULL)//如果为根结点
    {
        root = node;
    }
    else
    {
        if(root->data == node->data)
            return root;
        else
        {
            if (root->data < node->data)//新的值比当前结点值大，写向右子树
                root->r = inserttree(root->r, node->data);
            else//新的值比当前结点值小，写向左子树
                root->l = inserttree(root->l, node->data);
        }
        
        
    }
    return root;
}
//显示二叉搜索树中所有结点内容
void printtree (TreeNode *root)
{
    if (root == NULL)
        return;
    printtree(root->l);
    printf("%d ",root->data);
    printtree(root->r);
}
int main(void)
{
    TreeNode *root;
    root = NULL;//结点为空时，将该结点当成根结点
    int data,i;
    int a[SIZE] = {12,3,45,6,7,78,8,89,1,32};
    for(i=0;i<SIZE;i++)
    {
        data = a[i];
        root = inserttree(root, data);
    }
    printtree(root);//遍历树
    printf("\n");
}
