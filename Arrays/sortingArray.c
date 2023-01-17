#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    int arr[n], i, j, min;
    // Enter elements of array
    printf("Enter the elements in array \n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    // Print elements of array
    printf("Elements in array are: \n");
    for(i=0; i<n; i++){
        printf(" %d ", arr[i]);
    }

    // Sorting Logic
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                min= arr[i];
                arr[i]= arr[j];
                arr[j]= min;
            }
        }
    }

    printf("\nElements in sorted array are: \n");
    for(i=0; i<n; i++){
        printf(" %d ", arr[i]);
    }
    return 0;
}