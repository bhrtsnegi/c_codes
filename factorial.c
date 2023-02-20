#include<stdio.h>
// factorial code for any number answer in range of integer
int main()
{
 int fact=1,i,n;
 printf("Enter a number to print it's factorial: ");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
 {
  fact=fact*i;
 }

 printf("The factorial of %d is %d",n,fact);
 return 0;
}
