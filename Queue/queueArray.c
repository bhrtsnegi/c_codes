#include<stdio.h>
#include<stdlib.h>

// Global Variables
int arr[50], front=-1, rear=-1;

// Insertion

int insertion()
{
    int val;
    printf("Enter the element: ");
    scanf("%d", &val);
    if(rear==49)
    {
        printf("Overflow");
    }
    if(front==-1 && rear==-1)
    {
        front=rear=0;
        arr[rear]=val;
    }
    else
    {
        rear=rear+1;
        arr[rear]=val;
    }
}

// deletion block

int deletion()
{
    if(front==-1 || front>rear)
    {
        printf("Underflow");
    }
    else
    {
        printf("\n%d got deleted successfully", arr[front]);
        front=front+1;
    }
}

//peek

int peek()
{
    if(front==-1 || front>rear)
    {
        printf("Underflow");
    }
    else
    {
        printf("\nPeek element is %d\n", arr[front]);
    }
}

int elementSearch()
{

    int val, flag=0;
    printf("\nEnter the element you want to search: ");
    scanf("%d", &val);
    if(front==-1 || front>rear)
    {
        printf("No element in Queue");
    }
    for(int i=front; i<=rear; i++)
    {
        if(arr[i]==val)
        {
            printf("\nElement %d found at %d position.", val, i+1);
            flag++;
            break;
        }
    }
    if(flag==0)
    {
        printf("\nElement not available in stack.\n");
    }
}

int indexElementSearch()
{
    
    int val;
    printf("Enter the position of element: ");
    scanf("%d", &val);
    if(front==-1 || front>rear)
    {
        printf("No element in Queue");
    }
    if(val>rear)
    {
        printf("Index out of bound");
    }
    else
    {
        printf("Element at %d position is %d", val, arr[val-1]);
    }

}
// display

int display()
{
    printf("\nQueue Elements are\n");
    for(int i=rear; i>=front; i--)
    {
        printf("%d\n", arr[i]);
    }
}
//main menu
int main()
{
    
    int choice=0;
    printf("***Stack Application starts from here***\n");
    while(choice<6)
    {
        printf("\nPress '1' for Insertion\n");
        printf("Press '2' for Deletion\n");
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