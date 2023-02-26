#include<stdio.h>
#include<stdlib.h>

// Creating Structure
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root=NULL;

int insertBST();
int main()
{
    int val, ch;
    printf("*** PROGRAM FOR BST TREE INSERTION ***\n");
    do
    {
        
        printf("Enter the element: ");
        scanf("%d", &val);
        insertBST(root, val);
        printf("\nPress '1' to enter another element: ");
        scanf("%d", &ch);
    }while(ch==1);
    printf("\nExiting...");
}

int insertBST(struct node *Root, int value)
{
    if(Root==NULL)
    {
        Root=(struct node*)malloc(sizeof(struct node));
        Root->data=value;
        Root->right=Root->left=NULL;
    }
    else
    {
        if(value<Root->data)
        {
            insertBST(root->left, value);
        }
        else
        {
            insertBST(root->right, value);
        }
    }
}