#include<stdio.h>
#include<stdlib.h>

// Structure defined
struct node
{
    struct node *preLink;
    int info;
    struct node *postLink;
};
struct node *first;

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
    while(ch==1){
        nptr= (struct node*)malloc(sizeof(struct node));
        printf("\n Enter the value of next element: ");
        scanf("%d", &nptr->info);
        ptr->postLink=nptr;
        nptr->preLink= ptr;
        ptr=nptr;

        printf("Do you want to add another element in the list. If Yes, Press 1:");
        scanf("%d", &ch);
    }
}

//Insertion Beginning

void insertionBeginning(){
    struct node *newNode;
    newNode= (struct node*)malloc(sizeof(struct node));
    printf("\n Enter the value which you want to insert: ");
    scanf("%d", &newNode->info);
    if(first==NULL){
        printf("Overload");
    }
    else{
        newNode->postLink=first;
        newNode->preLink= NULL;
        first= newNode;
    }

}

// Insertion End

void insertionEnd(){
    struct node *newNode;
}

// Traverse List

void listTraverse(){
    
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
    
    int choice;
    printf("\n\n**** Your Program Starts Here Doubly ****\n");
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

        //     case 2:
        //     insertionEnd();
        //     goto here;

        //     case 3:
        //     insertionAfter();
        //     goto here;

            default:
            printf("\nGoing back to main menu\n");
            goto here;
        }

        // case 3:
        // printf("\n-> Press '1' to delete an element in beginning \n");
        // printf("-> Press '2' to delete an element at the end \n");
        // printf("-> Press '3' to delete an element in between \n");
        // printf("-> Press '4' to delete an element from specific position \n");
        // printf("-> Press any key to go back to main menu");
        // printf("\n Enter Your Choice: \n");
        // scanf("%d", &choice);

        // switch(choice)
        // {
        //     case 1:
        //     deletionBeginning();
        //     goto here;

        //     case 2:
        //     deletionEnd();
        //     goto here;

        //     case 3:
        //     deletionValue();
        //     goto here;

        //     case 4:
        //     deletionPos();
        //     goto here;
            
        //     default:
        //     printf("\nGoing back to main menu\n");
        //     goto here;

        // }

        case 4:
        listTraverse();
        goto here;

        // case 5:
        // printf("\nWhich order you want to perform\n");
        // printf("\nPress '1' for Ascending\n");
        // printf("Press '2' for Descending\n");
        // scanf("%d", &choice);
        // switch(choice){
        //     case 1:
        //     ascSort();
        //     goto here;

        //     case 2:
        //     dscSort();
        //     goto here;
            
        //     default:
        //     printf("\nGoing back to main menu\n");
        //     goto here;
        // }

        // case 6:
        // printf("\nWhich search you want to perform\n");
        // printf("\nPress '1' to search for an element's position\n");
        // printf("Press '2' to search for element in specific position\n");
        // scanf("%d", &choice);
        // switch(choice){
        //     case 1:
        //     PosSearch();
        //     goto here;

        //     case 2:
        //     ElementSearch();
        //     goto here;
            
        //     default:
        //     printf("\nGoing back to main menu\n");
        //     goto here;
        // }

        // default:
        // printf("\nExiting...\n");
        // break;

    }
}
