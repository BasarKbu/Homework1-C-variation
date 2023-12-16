#include<stdio.h>
#include<stdlib.h>

int main(){
	float F,C;
	printf("Enter the degree in fahrenheit type: \n"); scanf("%f",&F);
	C=(F-32)/1.8;
	printf("The degree in celcius type:%f ",C);
	
	return 0;
}
