#include<stdio.h>
#include<stdlib.h>

//creating structure
struct node
{
    int info;
    struct node *link;
};
struct node *front= NULL, *rear= NULL;

//push block
int insertion()
{
    struct node *ptr;
    ptr= (struct node*)malloc(sizeof(struct node));
    printf("Enter the value which you want to push: ");
    scanf("%d", &ptr->info);
    if(front==NULL)
    {
        front=rear=ptr;
        front->link=rear->link=NULL;
    }
    else
    {
        rear->link=ptr;
        rear=ptr;
        rear->link=NULL;
    }
}

//pop block
int deletion()
{
    int value;
    if(front==NULL)
    {
        printf("Underflow. Back to main menu");
    }
    value=front->info;
    front=front->link;
    printf("\n%d has deleted successfully\n", value);
}

//element Search block
int elementSearch()
{
    int val, count=0;
    struct node *ptr;
    ptr= (struct node*)malloc(sizeof(struct node));
    ptr=front;
    printf("\nEnter the value which you want to search: ");
    scanf("%d", &val);
    if(front==NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        while(ptr->info!=val && ptr!=NULL)
        {
            count++;
            ptr=ptr->link;
        }
        if(count==0)
        {
            printf("Element Not Found\n");
        }
        else
        {
            printf("Element %d found in %d position\n", val, count+1);
        }

    }

}

// peek block
int peek()
{
    if(front==NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("%d is the peak element\n", front->info);
    }
    
}

// display block
int display()
{
    struct node *ptr;
    ptr=front;
    if(front==NULL)
    {
        printf("Queue is Empty.\n");
    }
    else
    {
        printf("\n*****Your Queue Linkedlist Print Here*****\n");
        while(ptr!=NULL)
        {
            printf("ptr-> %d \n",ptr->info);
            ptr=ptr->link;
        }
    }
}

// main block
int main(){
    int choice;
    printf("***Queue Application starts from here***\n");
    do
    {
        printf("\nPress '1' for insertion\n");
        printf("Press '2' for deletion\n");
        printf("Press '3' for Search\n");
        printf("Press '4' for peek\n");
        printf("Press '5' to display the elements\n");
        printf("\n Enter your choice: ");
        scanf("%d", &choice);
        system("cls");
    
        switch(choice)
        {
            case 1:
            insertion();
            break;

            case 2:
            deletion();
            break;
            
            case 3:
            elementSearch();
            break;

            case 4:
            peek();
            break;

            case 5:
            display();
            break;
        }
    }while(choice<6);

    printf("\nExiting the program...\n");
    return 0;
}