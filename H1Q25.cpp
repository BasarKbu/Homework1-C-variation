#include<stdlib.h>
#include<stdio.h>
//This program finds the highest common factor of two numbers.
int main(){
	int n1,n2,HCF,temp,i;
	printf("Enter the first number: \n"); scanf("%d",&n1);
	printf("Enter the second number: \n"); scanf("%d",&n2);
	
	if(n2>n1){
		temp=n1;
		n1=n2;
		n2=temp;
		
		for(i=1;i<=(n1/2);i++){
			if(n1 % i == 0 && n2 % i == 0)
			HCF=i;
		}
		printf("Highest common factor of two numbers is:%d \n",HCF);
		
	}
	
	else{
		
		for(i=1;i<=(n1/2);i++){
			if(n1 % i == 0 && n2 % i == 0)
			HCF=i;
		}
		printf("Highest common factor of two numbers is:%d \n",HCF);
		
		
	}
	
	
	
	
	
	
	return 0;
}
