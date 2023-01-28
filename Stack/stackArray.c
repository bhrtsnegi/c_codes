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

// Peek block
int peek()
{
    printf("\nPeek Element of this stack is %d\n", arr[top]);
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
            break;

            case 4:
            peek();
            break;

            case 5:
            break;

            case 6:
            display();
            break;
        }
    }

    printf("\nExiting the program...\n");
    return 0;
}