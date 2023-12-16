#include<stdio.h>
#include<stdlib.h>

int main(){
	int N,i,fact=1;
	printf("Enter a number: "); scanf("%d",&N);
	for(i=2;i<=N;i++){
		fact*=i;
	}
	printf("The factorial of the  number:%d ",fact);
	
	return 0;
}
