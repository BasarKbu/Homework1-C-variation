#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,sum=0;
	
	for(i=1000;i<2002;i+=2){
		printf("%d ",i);
		sum+=i;
	}
	printf("\n \n");
	printf("Sum of these numbers is:%d",sum);
	
	return 0;
}
