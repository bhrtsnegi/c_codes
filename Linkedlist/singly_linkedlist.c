#include<stdio.h>
#include<stdlib.h>

// Structure defined
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

// Deletion Position Element

void deletionPos(){
    struct node *ptr, *nptr;
    int pos;
    nptr= first;
    printf("Enter the position from which you want to delete the element: ");
    scanf("%d", &pos);
    if(first==NULL){
        printf("\n Underflow. Exiting...\n");
    }
    else{
        while(pos!=1 && nptr!=NULL){
            ptr=nptr;
            nptr=nptr->link;
            pos--;
        }
        if(nptr==NULL){
            printf("Position Not Available");
        }
        else{
            ptr->link=nptr->link;
        }
    }

}

// list Traverse 

void listTraverse()
{
    struct node *ptr;
    ptr=first;
    printf("\n*****Your Linkedlist Print Here*****\n");
    while(ptr!=NULL)
    {
        printf("ptr-> %d \n",ptr->info);
        ptr=ptr->link;
    }
}

// Ascending Sorting

void ascSort(){
    struct node *ptr, *nptr;
    ptr= first;
    int temp;
    while(ptr!=NULL){
        nptr->link= ptr;
        while(nptr!=NULL){
            if(nptr->info<ptr->info){
                temp= ptr->info;
                ptr->info= nptr->info;
                nptr->info= temp;
            }
            nptr=nptr->link;
        }
        ptr= ptr->link;
    }
    ptr= first;
    printf("\n*****Your Ascending Sorted Linkedlist Print Here*****\n");
    while(ptr!=NULL)
    {
        printf("ptr-> %d \n",ptr->info);
        ptr=ptr->link;
    }
}

// Descending Sorting

void dscSort(){

}

// Element Search

void ElementSearch(){

    struct node *ptr, *nptr;
    int pos;
    nptr= first;
    printf("Enter the position for the element: ");
    scanf("%d", &pos);
    if(first==NULL){
        printf("\n Underflow. Exiting...\n");
    }
    else{
        while(pos!=1 && nptr!=NULL){
            ptr=nptr;
            nptr=nptr->link;
            pos--;
        }
        if(nptr==NULL){
            printf("Position Not Available");
        }
        else{
            printf("\nThe desired Element is %d\n", nptr->info);
        }
    }
}

// Position Search

void PosSearch(){
    struct node *ptr;
    ptr=first;
    int val, counter=0;
    printf("\nEnter the element you want to search for: ");
    scanf("%d", &val);

    if(first==NULL){
        printf("\n Underflow. Exiting...\n");
    }
    else{
        while(ptr->info!=val && ptr!=NULL){
            ptr=ptr->link;
            counter++;
        }

        if(ptr==NULL){
            printf("\nElement Not Found\n");
        }
        else{
            printf("\nElement is in %d position\n", counter+1);
        }
    }
}

// main body
void main()
{

    int choice;
    printf("\n\n**** Your Program Starts Here ****\n");
    //here is the point where goto statement gets enter
    here:
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
        goto here;

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
            goto here;

            case 2:
            insertionEnd();
            goto here;

            case 3:
            insertionAfter();
            goto here;

            default:
            printf("\nGoing back to main menu\n");
            goto here;
        }
        break;

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
            goto here;

            case 2:
            deletionEnd();
            goto here;

            case 3:
            deletionValue();
            goto here;

            case 4:
            deletionPos();
            goto here;
            
            default:
            printf("\nGoing back to main menu\n");
            goto here;

        }

        case 4:
        listTraverse();
        goto here;

        case 5:
        printf("\nWhich order you want to perform\n");
        printf("\nPress '1' for Ascending\n");
        printf("Press '2' for Descending\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            ascSort();
            goto here;

            case 2:
            dscSort();
            goto here;
            
            default:
            printf("\nGoing back to main menu\n");
            goto here;
        }

        case 6:
        printf("\nWhich search you want to perform\n");
        printf("\nPress '1' to search for an element's position\n");
        printf("Press '2' to search for element in specific position\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            PosSearch();
            goto here;

            case 2:
            ElementSearch();
            goto here;
            
            default:
            printf("\nGoing back to main menu\n");
            goto here;
        }

        default:
        printf("\nExiting...\n");
        break;

    }
}
