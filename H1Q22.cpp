#include <stdio.h>
#include <math.h>
//This code swaps the first digit and the last digit.
int main() {
	int O_FD,O_LD,number,FD,LD,temp,digit=0,temp2,temp3,Between,new_number;
	printf("Enter the number: \n"); scanf("%d",&number);
	temp=number;
	
	// O_LD means original last digit.
	//O_FD means original first digit.
	
	
	FD=number % 10; // We give the LD value to FD.
	while(temp!=0){
		
		temp/=10;
		digit++;
	}
	
	temp2=number;
	LD =temp2 / pow(10,digit-1);
	
	temp3=number;
	O_LD = temp3 % 10;
	O_FD = temp3 / pow(10,digit-1);
	
	Between=number - (O_FD * pow(10,digit-1) + O_LD);
	
	new_number=Between + LD + FD * pow(10,digit-1);
	
	printf("The number you have after you switched the first digit and the last digit is:%d ",new_number);
	
	return 0;
}
