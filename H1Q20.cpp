#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,digit=0;
	printf("Enter a number: "); scanf("%d",&n);
	while(n!=0){
		n/=10;
		digit++;
	}
	
	printf("Digit count of the number:%d",digit);
	
	return 0;
}
