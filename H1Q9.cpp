#include<stdio.h>

int main(){
	int number,i;
	printf("Enter a number: "); scanf("%d",&number);
	for(i=3;i<10;i++){
		if(i % number == 0)
		printf("%d ",i);
	}
	return 0;
}
