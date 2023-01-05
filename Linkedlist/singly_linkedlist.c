#include<stdio.h>
#include<malloc.h>

// Structure define
struct node
{
    int info;
    struct node *link;
};
struct node *first;
// createList Block

void createList()
{
    struct node *ptr, *nptr;
    int ch;
    ptr= (struct node*)malloc(sizeof(struct node));
    printf("Enter the value of first element: ");
    scanf("%d", &ptr->info);
    first= ptr;
    ptr->link= NULL;
    printf("Do you want to add another element in list? If yes, Press '1':  ");
    scanf("%d", &ch);
    while(ch==1)
    {
        nptr= (struct node*)malloc(sizeof(struct node));
        printf("Enter the value of next element: ");
        scanf("%d", &nptr->info);
        ptr->link=nptr;
        ptr=nptr;
        ptr->link= NULL;

        printf("Do you want to add another element in list? If yes, Press '1': ");
        scanf("%d", &ch);

    }
}

// insertion Beginning Block

void insertionBeginning()
{
    struct node *newNode;
    newNode= (struct node*)malloc(sizeof(struct node));
    int val;
    printf("Enter the value of element which you want to insert in the begining: ");
    scanf("%d", &val);
    if(first==NULL)
    {
        printf("Overload");
    }
    else
    {
        newNode->info= val;
        newNode->link= first;
        first= newNode;
    }
}

// insertion End Block

void insertionEnd()
{
    struct node *newNode, *ptr;
    newNode= (struct node*)malloc(sizeof(struct node));
    ptr=first;
    int val;
    printf("Enter the value of element which you want to insert in the end: ");
    scanf("%d", &val);
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    newNode->info= val;
    ptr->link= newNode;
    newNode->link= NULL;
}

// insertion After Block

void insertionAfter()
{
    struct node *newNode, *ptr;
    newNode= (struct node*)malloc(sizeof(struct node));
    ptr= first;
    int val, val2;
    printf("Enter the value of element which you want to insert: ");
    scanf("%d", &val);
    printf("Enter the value after which you want to enter the element: ");
    scanf("%d", &val2);
    while(ptr->info!=val2)
    {
        if(ptr->link==NULL)
        {
            printf("\nSORRY. Item after which you want to enter the node is not available...\n ***Going back to Main Menu*** \n");
            break;
        }
        else
        {
            ptr=ptr->link;
        }
    }
    newNode->link=ptr->link;
    newNode->info= val;
    ptr->link= newNode;

}

// deletion Beginning Block

void deletionBeginning()
{
    struct node *ptr;
    ptr=first;
    if(first==NULL)
    {
        printf("\nUnderflow. Exiting... \n");
    }
    else
    {
        first=ptr->link;
        printf("Element deleted successfully from Beginning...");
    }
    
}

// deletion End Block

void deletionEnd()
{
    struct node *ptr, *nptr;
    ptr= first;
    nptr=ptr;
    if(first==NULL)
    {
        printf("\nUnderflow. Exiting... \n");
    }
    else
    {
        while(nptr->link)
        {
            ptr=nptr;
            nptr=nptr->link;
        }
    }
    ptr->link=NULL;
    printf("\n Last Element of the list got deleted. Exiting....\n ***Returning to MAIN MENU***\n");
}

// deletion Middle Block

void deletionValue()
{
    struct node *ptr, *nptr;
    int val;
    nptr=first;
    printf("\nEnter the value which you want to delete from the list: ");
    scanf("%d", &val);
    if(first==NULL)
    {
        printf("\nUnderflow. Exiting... \n");
    }
    else
    {
        while(nptr!=NULL && nptr->info!=val)
        {
            ptr=nptr;
            nptr= nptr->link;
        }
        if(nptr==NULL)
        {
            printf("Item Not Found. Exiting...\n");
        }
        else
        {
            ptr->link= nptr->link;
            printf("Item Deleted Successfully\n");
        }
    }
}

// list Traverse 

void listTraverse()
{
    struct node *ptr;
    ptr=first;
    printf("\n*****Your Linkedlist Print Here*****\n");
    while(ptr->link!=NULL)
    {
        printf("ptr-> %d \n",ptr->info);
        ptr=ptr->link;
    }
    printf("ptr-> %d\n",ptr->info);
}


// main body
void main()
{

    int choice;
    printf("\n**** Your Program Starts Here ****\n");
    //here is the point where goto statement gets enter
    here:
    printf("\nSelect the option you want to perform from the list\n");
    printf("\n-> Enter '1' for creation of a linked list \n");
    printf("-> Enter '2' for insertion of element in list \n");
    printf("-> Enter '3' for deletion of any element from the list \n");
    printf("-> Enter '4' to traverse the linked list \n");
    printf("-> Enter any other key to exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        createList();
        goto here;
        break;

        case 2:
        printf("\n-> Enter '1' to insert an element in beginning \n");
        printf("-> Enter '2' to insert an element at the end \n");
        printf("-> Enter '3' to insert an element after any element \n");
        printf("-> Enter any key to go back to main menu");
        printf("\n Enter Your Choice: \n");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            insertionBeginning();
            goto here;
            break;

            case 2:
            insertionEnd();
            goto here;
            break;

            case 3:
            insertionAfter();
            goto here;

            default:
            printf("\nGoing back to main menu\n");
            goto here;
        }
        break;

        case 3:
        printf("\n-> Enter '1' to delete an element in beginning \n");
        printf("-> Enter '2' to delete an element at the end \n");
        printf("-> Enter '3' to delete an element in between \n");
        printf("-> Enter any key to go back to main menu");
        printf("\n Enter Your Choice: \n");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            deletionBeginning();
            goto here;
            break;

            case 2:
            deletionEnd();
            goto here;
            break;

            case 3:
            deletionValue();
            goto here;
            break;
            
            default:
            printf("\nGoing back to main menu\n");
            goto here;

        }
        break;

        case 4:
        listTraverse();
        goto here;
        break;

        default:
        printf("\nExiting...\n");
        break;

    }
}
    