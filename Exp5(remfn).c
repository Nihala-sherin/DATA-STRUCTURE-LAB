#include <stdio.h>
#include <stdlib.h>
int SumRemainder(int n,int m){
				int a[n],sum=0,r;
				printf("enter the numbers: ");
				for (int i=0;i<n;i++) {
							scanf("%d",&a[i]);
							r = a[i] % m;
							sum = sum + r;
				  		  }
				printf("The sum of remainders when divided by %d is: %d\n",m,sum);
				return sum;

}
int main(){
		int n,m;
		printf("Enter the limit: ");
		scanf("%d",&n);
		printf("Enter the divisor: ");
		scanf("%d",&m);
		SumRemainder(n,m);
return 0;
}
