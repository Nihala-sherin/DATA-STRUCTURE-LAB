#include <stdio.h>
#include <stdlib.h>
void main(){
		int n,m,i,a[n],sum=0,r;
		printf("Enter the limit: ");
		scanf("%d",&n);
		printf("Enter the divisor: ");
		scanf("%d",&m);
		printf("enter the numbers: ");
		for (i=0;i<n;i++) {
					scanf("%d",&a[i]);
					r = a[i] % m;
					sum = sum + r;
				  }
		printf("The sum of remainders when divided by %d is: %d",m,sum);

}
