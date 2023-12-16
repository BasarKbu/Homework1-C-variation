#include<stdio.h>
int main(){
	int A,B,C;
	printf("Enter the first number: \n"); scanf("%d",&A);
	printf("Enter the second number: \n"); scanf("%d",&B);
	printf("Enter the third number: \n"); scanf("%d",&C);
	if(A>B && A>C)
	printf("The biggest number is A");
	else if(B>A && B>C)
	printf("The biggest number is B");
	else
	printf("The biggest number C");
	return 0;
}
