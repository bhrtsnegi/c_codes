#include<stdio.h>

// Traverse Function
int traversal(int a[10])
{
    // Loop for traversal
    for(int i=0; i<10; i++)
    {
        printf("\n Element %d is %d\n", i, a[i]);
    }
}
int main()
{
    // Program to traverse element of an array
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    traversal(arr);
    return 0;
}