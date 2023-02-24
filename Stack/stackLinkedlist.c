#include<stdio.h>
#include<stdlib.h>

//creating structure
struct node
{
    int info;
    struct node *link;
};
struct node *top= NULL;

//push block
int push()
{
    struct node *ptr;
    ptr= (struct node*)malloc(sizeof(struct node));
    printf("Enter the value which you want to push: ");
    scanf("%d", &ptr->info);
    if(top==NULL)
    {
        top=ptr;
        ptr->link=NULL;
    }
    else
    {
        ptr->link=top;
        top=ptr;
    }
}

//pop block
int pop()
{
    int value;
    if(top==NULL)
    {
        printf("Underflow. Back to main menu");
    }
    else
    {
        value= top->info;
        top=top->link;
        printf("%d deleted successfully.\n", value);
    }
}

//element Search block
int elementSearch()
{
    int val, count=0;
    struct node *ptr;
    ptr= (struct node*)malloc(sizeof(struct node));
    ptr=top;
    printf("\nEnter the value which you want to search: ");
    scanf("%d", &val);
    if(top==NULL)
    {
        printf("Stack is Empty\n");
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
    if(top==NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("%d is the peak element\n", top->info);
    }
    
}

// display block
int display()
{
    struct node *ptr;
    ptr=top;
    if(top==NULL)
    {
        printf("Stack is Empty.\n");
    }
    else
    {
        printf("\n*****Your STACK Linkedlist Print Here*****\n");
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
    printf("***Stack Application starts from here***\n");
    do
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