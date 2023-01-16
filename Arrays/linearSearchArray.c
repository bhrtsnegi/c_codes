// Linear Search Using array
#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of element in array: ");
    scanf("%d", &n);

    int arr[n], i, num, count=0;
    printf("Enter the elements in array\n");
    for(i=1; i<=n; i++){
        scanf("%d", &arr[i]);
    }

    // Printing array
    printf("Elements in array are: \n");
    for(i=1; i<=n; i++){
        printf("%d\n", arr[i]);
    }
    // Element Search
    printf("Enter the element you want to search: ");
    scanf("%d",&num);
    
    for(i=1;i<=n;i++){
        if(arr[i]==num){
            printf("%d is the index of %d", i, num);
            count++;
        }
    }
    if(count==0){
        printf("Element not found.");
    }
    return 0;
}