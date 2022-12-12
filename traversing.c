#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    int arr[n], i;
    printf("Enter the elements in array: \n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    // print the elements in array
    printf("Elements after traversing are: \n");
    for(i=0; i<n; i++){
        printf("Element %d : %d \n", i, arr[i]);
    }
    return 0;
}