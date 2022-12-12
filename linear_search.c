#include<stdio.h>
int main(){
    int n;

    // Initialize number of element in array logic
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    int arr[n], i, item, count;
    printf("Enter the elements in array: \n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    count=0;
    // item need to search initialization
    printf("Enter the element need to search in the array: ");
    scanf("%d", &item);

    //Sorting Logic
    for(i=0; i<n; i++){
        if(item==arr[i]){
            printf("Item found in %d location.", i);
            count++;
            break;
        }
        else{
            continue;
        }
    }

    // Element found or not check
    if(count==0){
        printf("Element not found in array");
    }
    return 0;
}