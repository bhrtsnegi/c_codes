#include<stdio.h>
int main(){
    // program to find even or odd number
    int num, arr[26], count1, count;
    count=0;
    count1=0;
    // to initialize number of elements in array
    printf("Enter 25 positive integers: \n");
    for(num=1; num<26; num++){
        scanf("%d", &arr[num]);
    }

    //logic for even odd
    for(num=1; num<26; num++){
        if(arr[num]%2==0){
            count++;
            continue;
        }
        else{
            count1++;
            continue;
        }
    }
    printf("Odd Numbers are %d", count1);
    printf("\n Even Numbers are %d", count);
}
