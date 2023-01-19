// This is a menu driven program for all operations which can be performed in an array.
#include<stdio.h>

// Array Creation Block
int createArray()
{

}

// Array Traversing Block
int traverseArray()
{

}

// Array Insertion Beginning Block
int beginningInsert()
{

}

// Array Insertion End Block
int endInsert()
{

}

// Array Specific Position Block
int positionInsert()
{

}

// Array Deletion Beginning Block
int beginningDelete()
{

}

// Array Deletion End Block
int endDelete()
{

}

// Array Specific Position Block to delete element
int positionDelete()
{

}

// Ascending Sorting Block
int ascSort()
{

}

// Descending Sorting Block
int dscSort()
{

}

// Searching an element Block
int elementSearch()
{

}

// Searching at specific position
int positionElementSearch()
{

}

// Searching element's position
int elementPsotionSearch()
{

}

// Main Block Starts Here
int main()
{
    int choice;
    printf("\n***YOUR PROGRAM STARTS HERE***\n");
    printf("\nPlease enter your choice \n");
    printf("Press '1' for array creation\n");
    printf("Press '2' for array traversing\n");
    printf("Press '3' for element insertion\n");
    printf("Press '4' for element deletion\n");
    printf("Press '5' to sort array\n");
    printf("Press '6' to search any element or position\n");
    printf("Press any other key to Exit.\n");
    printf("Enter your choice: ");

    scanf("%d", &choice);

    // Swtich starts here
    switch(choice)
    {
        case 1:
        createArray();
        break;

        case 2:
        traveseArray();
        break;

        case 3:
        printf("\n Press '1' to insert at beginning\n");
        printf("Press '2' to insert at end\n");
        printf("Press '3' to insert at specific position\n");
        printf("Press any other key to go to previous menu");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        // Nested Switch Here
        switch(choice)
        {
            case 1:
            beginningInsert();
            break;

            case 2:
            endInsert();
            break;

            case 3:
            positionInsert();
            break;

            default:
            printf("Exiting...");
            break;
        }
        break;

        case 4:
        printf("\n Press '1' to delete at beginning\n");
        printf("Press '2' to delete at end\n");
        printf("Press '3' to delete at specific position\n");
        printf("Press any other key to go to previous menu");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        // Nested Switch Here
        switch(choice)
        {
            case 1:
            beginningDelete();
            break;

            case 2:
            endDelete();
            break;

            case 3:
            positionDelete();
            break;

            default:
            printf("Exiting... ");
            break;
        }
        break;

        case 5:
        printf("Press '1' to sort in ascending order\n");
        printf("Press '2' to sort in descending order\n");
        printf("Press any key to go to main menu\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        // Nested Switch
        switch(choice)
        {
            case 1:
            ascSort();
            break;

            case 2:
            dscSort();
            break;

            default:
            printf("Exiting...");
            break;
        }

        case 6:
        printf("Press '1' to search element\n");
        printf("Press '2' to search element in specific position\n");
        printf("Press '3' to search the position of a specific element");
        printf("Press any other key to go to main menu");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        // Nested Switch
        switch(choice)
        {
            case 1:
            elementSearch();
            break;

            case 2:
            positionElementSearch();
            break;

            case 3:
            elementPositionSearch();
            break;

            default:
            printf("Exiting...");
            break;
        }

        default:
        printf("Exiting this program...");
        break;
    }
    return 0;
}