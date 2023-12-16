#include<stdio.h>
int main(){
	int i,number,sum=0;
	for(i=1;i<11;i++){
		printf("Enter a number: \n"); scanf("%d",&number);
		sum+=number;
	}
	printf("Sum of the numbers:%d",sum);
	
	return 0;
}
