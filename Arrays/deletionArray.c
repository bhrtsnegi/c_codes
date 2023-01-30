#include<stdio.h>
//main block
int main()
{
    int arr[50], num, k;
    printf("Enter the number of elements: ");
    scanf("%d", &num);

    // insertion of element in an array
    for(int i=1; i<=num; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the position of element you want to delete: ");
    scanf("%d", &k);
    //Deletion of element
    for(int i=k; i<=num; i++)
    {
        arr[i]= arr[i+1];
    }
    num=num-1;
    for(int i=1; i<=num; i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    return 0;
}