#include<stdio.h>
//main block
int main()
{
    int num, arr[50], k, val;
    printf("Enter the number of elements: ");
    scanf("%d", &num);
    //insertion of elements in array
    for(int i=1; i<=num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position where you want to insert element:");
    scanf("%d", &k);

    printf("Enter the value which you want to insert: ");
    scanf("%d", &val);
    
    for(int i=num+1; i>=k+1; i-- )
    {
        printf("working ");
        arr[i]= arr[i-1];
    }
    num++;
    arr[k]= val;
    printf("Updated array :\n");
    for(int i=1; i<=num; i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    return 0;
}