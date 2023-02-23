#include<stdio.h>
#include<stdlib.h>

//creating structure
struct node
{
    int info;
    struct node *link;
};
struct node *first= NULL;

//push block
int push()
{
    struct node *ptr, *nptr;
    ptr= (struct node*)malloc(sizeof(struct node));
    ptr= first;
    if(first==NULL)
    {
        first=ptr;
        printf("Enter the value which you want to push: ");
        scanf("%d", &ptr->info);
        ptr->link=NULL;
    }
    else
    {
        nptr->link=ptr;
        first=nptr;
        printf("Enter the value which you want to push: ");
        scanf("%d", nptr->info);
    }
}

//pop block
int pop()
{

}

//element Search block
int elementSearch()
{

}

// position Search block
int indexElementSearch()
{

}

// peek block
int peek()
{

}

// display block
int display()
{
    struct node *ptr;ptr=first;
    printf("\n*****Your STACK Linkedlist Print Here*****\n");
    while(ptr!=NULL)
    {
        printf("ptr-> %d \n",ptr->info);
        ptr=ptr->link;
    }
}

// main block
int main(){
    int choice=0;
    printf("***Stack Application starts from here***\n");
    while(choice<6)
    {
        printf("\nPress '1' for push\n");
        printf("Press '2' for pop\n");
        printf("Press '3' for Search\n");
        printf("Press '4' for peek\n");
        printf("Press '5' to display the elements\n");
        printf("\n Enter your choice: ");
        scanf("%d", &choice);
        system("cls");
    
        switch(choice)
        {
            case 1:
            push();
            break;

            case 2:
            pop();
            break;
            
            case 3:
            printf("\n Press '1' to search for an element\n");
            printf("\nPress '2' to search an element with specific index\n");
            printf("\n Enter your choice: ");
            scanf("%d", &choice);
            //nested switch
            switch(choice)
            {
                case 1:
                elementSearch();
                break;

                case 2:
                indexElementSearch();
                break;
            }
            break;

            case 4:
            peek();
            break;

            case 5:
            display();
            break;
        }
    }

    printf("\nExiting the program...\n");
    return 0;
}