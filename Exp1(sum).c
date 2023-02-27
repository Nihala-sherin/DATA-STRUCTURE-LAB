#include <stdio.h>
#include <stdlib.h>
void main(){
	int x;
	float y,sum;
	printf("Enter an integer number: ");
	scanf("%d",&x);
	printf("Enter a floating point number: ");
	scanf("%f",&y);
	sum = x + y;
	printf("The sum of the two numbers is: %.3f",sum);
}
