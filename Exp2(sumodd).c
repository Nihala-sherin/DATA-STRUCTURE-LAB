#include <stdio.h>
#include <stdlib.h>
void main(){
	int n,i,sum=0,a[n];
	printf("Enter the limit of numbers: ");
	scanf("%d",&n);
	printf("Enter %d integer numbers: ",n);
	for (i=0;i<n;i++){
			   scanf("%d",&a[i]);
			   if (a[i] % 2 != 0){
			   		      sum=sum+a[i];
			   		      }
			 }
	printf("Sum of odd numbers = %d",sum);
}
