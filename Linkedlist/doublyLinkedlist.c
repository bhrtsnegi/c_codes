// DOUBLY LINKEDLIST MENU DRIVEN CODE
#include<stdio.h>
#include<stdlib.h>

// Structure defined here
struct node
{
    struct node *preLink;
    int info;
    struct node *postLink;
};
struct node *first, *last;

//Create List (Doubly)

void createList()
{
    struct node *ptr, *nptr;
    int ch;
    ptr= (struct node*)malloc(sizeof(struct node));
    printf("\nEnter the value of first element: ");
    scanf("%d", &ptr->info);
    first= ptr;
    ptr->preLink=NULL;
    ptr->postLink= NULL;
    printf("\nDo you want to add another element in the list. If Yes, Press 1: ");
    scanf("%d", &ch);
    while(ch==1)
    {
        nptr= (struct node*)malloc(sizeof(struct node));
        printf("\n Enter the value of next element: ");
        scanf("%d", &nptr->info);
        ptr->postLink=nptr;
        nptr->preLink= ptr;
        ptr=nptr;

        printf("Do you want to add another element in the list. If Yes, Press 1:");
        scanf("%d", &ch);
    }
    last= nptr;
}

//Insertion Beginning

void insertionBeginning()
{
    struct node *newNode;
    newNode= (struct node*)malloc(sizeof(struct node));
    printf("\n Enter the value which you want to insert: ");
    scanf("%d", &newNode->info);
    if(first==NULL)
    {
        newNode->postLink=NULL;
        newNode->preLink=NULL;
        first=newNode;
    }
    else
    {
        newNode->postLink=first;
        newNode->preLink= NULL;
        first= newNode;
    }

}

// Insertion End

void insertionEnd()
{
    struct node *newNode, *ptr;
    newNode= (struct node*)malloc (sizeof(struct node));
    printf("\nEnter the value which you want to insert: ");
    scanf("%d", &newNode->info);
    ptr=last;
    if(first==NULL)
    {
        newNode->postLink=NULL;
        newNode->preLink=NULL;
        first=newNode;
    }
    else
    {
        newNode->preLink=last;
        newNode->postLink= NULL;
        last=newNode;
        ptr->postLink= last;
    }
}

// Insertion After

void insertionAfter()
{
    struct node *ptr, *newNode;
    int val;
    newNode= (struct node*)malloc(sizeof(struct node));
    ptr=first;
    printf("Enter the element after which you want to insert element: ");
    scanf("%d", &val);
    printf("Enter the value of element: ");
    scanf("%d", &newNode->info);
    if(first==NULL)
    {
        printf("Overload");
    }
    else
    {
        while(ptr->info!=val)
        {
            ptr=ptr->postLink;
        }
        newNode->preLink=ptr;
        newNode->postLink= ptr->postLink;
        ptr->postLink=newNode;
        ptr=newNode->postLink;
        ptr->preLink=newNode;
    }

}

// Delete Beginning

void deletionBeginning(){
    struct node* ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    int item;
    ptr=first;
    if(first==NULL)
    {
        printf("Underflow");
    }
    else
    {
        item= ptr->info;
        first=ptr->postLink;
        printf(" %d Deleted Successfully.", item);
    }
    
    
}

// Delete End

void deletionEnd(){
    struct node* ptr;
    int item;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr= last;
    item=ptr->info;
    last= ptr->preLink;
    ptr->postLink=NULL;
    printf("%d Deleted Successfully", item);

}

// Delete Value

void deletionValue(){
    struct node* ptr, *nptr;
    int val;
    printf("Enter the value which you want to delete: ");
    scanf("%d", &val);
    ptr=first;
    if(first==NULL)
    {
        printf("Underflow");
    }
    else
    {
        while(ptr->info==val)
        {
            ptr=ptr->postLink;
        }
        nptr=ptr->postLink;
        nptr->preLink= ptr->preLink;
        ptr=ptr->preLink;
        ptr->postLink= nptr;
        printf("%d deleted successfully", val);
    }

}

// Delete Position

void deletionPos(){
    struct node *ptr, *nptr;
    int num;
    printf("Enter the position from where you want to delete the element: ");
}

// Ascending Sort

void ascSort(){

}

// Descending Sort

void dscSort(){

}

// Position Search

void posSearch(){

}

// Element Search

void elementSearch(){

}

// Traverse List

void normalTraverse(){
    
    struct node *ptr;
    ptr=first;
    printf("\n*****Your Linkedlist Print Here*****\n");
    while(ptr!=NULL)
    {
        printf("ptr-> %d \n",ptr->info);
        ptr=ptr->postLink;
    }
}

int main()
{
    
    int choice=1;
    printf("\n\n**** Your Program Starts Here Doubly ****\n");
    //here is the point where goto statement gets enter
    while(choice<7)
    {
        printf("\nSelect the option you want to perform from the list\n");
        printf("\n-> Press '1' for creation of a linked list \n");
        printf("-> Press '2' for insertion of element in list \n");
        printf("-> Press '3' for deletion of any element from the list \n");
        printf("-> Press '4' to traverse the linked list \n");
        printf("-> Press '5' to perform Sorting \n");
        printf("-> Press '6' to perform Searching \n");
        printf("-> Press any other key to exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        system("cls");

        switch(choice)
        {
            case 1:
            createList();
            break;

            case 2:
            printf("\n-> Press '1' to insert an element in beginning \n");
            printf("-> Press '2' to insert an element at the end \n");
            printf("-> Press '3' to insert an element after any element \n");
            printf("-> Press any key to go back to main menu");
            printf("\n Enter Your Choice: \n");
            scanf("%d", &choice);

            switch(choice)
            {
                case 1:
                insertionBeginning();
                break;

                case 2:
                insertionEnd();
                break;

                case 3:
                insertionAfter();
                break;

                default:
                printf("\nGoing back to main menu\n");
                break;
            }

            case 3:
            printf("\n-> Press '1' to delete an element in beginning \n");
            printf("-> Press '2' to delete an element at the end \n");
            printf("-> Press '3' to delete an element in between \n");
            printf("-> Press '4' to delete an element from specific position \n");
            printf("-> Press any key to go back to main menu");
            printf("\n Enter Your Choice: \n");
            scanf("%d", &choice);

            switch(choice)
            {
                case 1:
                deletionBeginning();
                break;

                case 2:
                deletionEnd();
                break;

                case 3:
                deletionValue();
                break;

                case 4:
                deletionPos();
                break;
            
                default:
                printf("\nGoing back to main menu\n");
                break;

            }

            case 4:
            normalTraverse();
            break;

            case 5:
            printf("\nWhich order you want to perform\n");
            printf("\nPress '1' for Ascending\n");
            printf("Press '2' for Descending\n");
            scanf("%d", &choice);
            switch(choice){
                case 1:
                ascSort();
                break;

                case 2:
                dscSort();
                break;

                default:
                printf("\nGoing back to main menu\n");
                break;
            }

            case 6:
            printf("\nWhich search you want to perform\n");
            printf("\nPress '1' to search for an element's position\n");
            printf("Press '2' to search for element in specific position\n");
            scanf("%d", &choice);
            switch(choice){
                case 1:
                posSearch();
                break;

                case 2:
                elementSearch();
                break;
            
                default:
                printf("\nGoing back to main menu\n");
                break;
            }

        }
    }
   printf("Exiting...");
}
