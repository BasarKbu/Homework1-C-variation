#include<stdio.h>
int main(){
	float degree;
	printf("Enter the degree in celcius type: \n"); scanf("%f",&degree);
	if(degree>0)
	printf("Degree is above the freezing point.\n");
	else if(degree == 0)
	printf("Degree is equal to freezing point. \n");
	else
	printf("Degree is below the freezing point. \n");
	return 0;
}
