#include <stdio.h>
#include <stdlib.h>
float sum(int x, float y){
			float z;
			z = x + y;
			printf("The sum of the two numbers is: %.3f",z);
			return z;
}

void main(){
	int x;
	float y;
	printf("Enter an integer number: ");
	scanf("%d",&x);
	printf("Enter a floating point number: ");
	scanf("%f",&y);
	sum(x,y);	
	
}
