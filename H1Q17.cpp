#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,i;
	float s=0;
	printf("Enter a number: \n"); scanf("%d",&n);
	for(i=2;i<=n;i+=2){
		s+=(1.0/float(i));
	}
	printf("Sum of these:%f",s);
	
	
	return 0;
}
