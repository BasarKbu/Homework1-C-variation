#include<stdio.h>
#include<stdlib.h>

int main(){
	float feet,cm;
	printf("Enter the length in feet: \n"); scanf("%f",&feet);
	cm=feet*(30.48);
	printf("The length in cm is:%f ",cm);
	
	
	return 0;
}
