#include<stdio.h>

//Global Initialization
int arr[50], top=-1;

//Push Block
int push()
{
    if(top==49)
    {
        printf("Overflow. Exiting...");
    }
    else
    {
        printf("Enter the element you want to insert: ");
        top=top+1;
        scanf("%d", &arr[top]);
    }
}

//Pop Block
int pop()
{
    if(top==-1)
    {
        printf("Underflow. Exiting...");
    }
    else
    {
        int item;
        item=arr[top];
        printf("Element %d popped out successfully...\n", item);
        top=top-1;
    }
}

// Search for an element
int elementSearch()
{
    int val, flag=0;
    printf("\nEnter the element you want to search: ");
    scanf("%d", &val);
    for(int i=0; i<=top; i++)
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

// search element by index
int indexElementSearch()
{
    int val;
    printf("Enter the position of element: ");
    scanf("%d", &val);
    if(val>top)
    {
        printf("Index out of bound");
    }
    else
    {
        printf("Element at %d position is %d", val, arr[val-1]);
    }
}

// Peek block
int peek()
{
    printf("\nPeek Element of this stack is %d\n", arr[top]);
}

// Empty or Not
int isEmpty()
{
    if(top==-1)
    {
        printf("\nStack is Empty\n");
    }
    else
    {
        printf("\nStack is not empty\n");
    }
}

// Display block
int display()
{
    printf("Elements in the stack are: \n");
    for(int i=0; i<=top; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main(){
    int choice=0;
    printf("***Stack Application starts from here***\n");
    while(choice<7)
    {
        printf("\nPress 1 for push\n");
        printf("Press '2' for pop\n");
        printf("Press '3' for Search\n");
        printf("Press '4' for peek\n");
        printf("Press '5' to check stack empty\n");
        printf("Press '6' to display the elements\n");
        printf("\n Enter your choice: ");
        scanf("%d", &choice);
    
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
            isEmpty();
            break;

            case 6:
            display();
            break;
        }
    }

    printf("\nExiting the program...\n");
    return 0;
}