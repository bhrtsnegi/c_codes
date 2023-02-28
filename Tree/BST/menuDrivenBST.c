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
int level=0;

int insertBST();
int searchBST();

int main()
{
    int val, ch, choice, num;
    printf("*** BST TREE ***\n");
    do
    {
        printf("Press '1' for insertion\n");
        printf("Press '2' to search\n");
        printf("Enter the value: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            printf("Enter the element: ");
            scanf("%d", &val);
            insertBST(root, val);
            break;

            case 2:
            printf("Enter the element: ");
            scanf("%d", &val);
            num=searchBST(root, val);
            printf("%d found in tree", num);
            break;
        }
    } while (choice<7);
    printf("\nExiting...");
    
}

//Insertion code


int insertBST(struct node *Root, int value)
{
    if(Root==NULL)
    {
        Root=(struct node*)malloc(sizeof(struct node));
        Root->data=value;
        Root->right=Root->left=NULL;
        root=Root;
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

//Searching code

int searchBST(struct node *Root, int value)
{
    
    if(Root->data==value)
    {
        return Root->data;
        level=0;
    }
    else if(Root->data<value)
    {
        level++;
        printf("I am coming here");
        searchBST(Root->right,value);
    }
    else if(Root->data>value)
    {
        level++;
        printf("I am coming here");
        searchBST(Root->left, value);
    }
    else
    {
        printf("\nElement Not Found\n");
    }
}