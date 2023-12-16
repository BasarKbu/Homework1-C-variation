#include<stdio.h>
#include<stdlib.h>

int main(){
	int LD,number;
	printf("Enter a number: \n"); scanf("%d",&number);
	LD=number % 10;
	printf("Numbers last digit:%d\n",LD);
	while(number>10){
		number/=10;
	}
	printf("The numbers first digit is:%d",number);
	return 0;
}
