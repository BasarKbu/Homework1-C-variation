#include<stdlib.h>
#include<stdio.h>
//This program finds the frequency of each digit given by integer.
int main(){
	int number,count_1=0,count_2=0,count_3=0,count_4=0,count_5=0,count_6=0,count_7=0,count_8=0,count_9=0,temp,i;
	printf("Enter a number: \n"); scanf("%d",&number);
	
	while(number > 0){
		temp = number % 10;
		number/=10;
		
		if(temp == 1)
		++count_1;
		if(temp == 2)
		++count_2;
		if(temp == 3)
		++count_3;
		if(temp == 4)
		++count_4;
		if(temp == 5)
		++count_5;
		if(temp == 6)
		++count_6;
		if(temp == 7)
		++count_7;
		if(temp == 8)
		++count_8;
		if(temp == 9)
		++count_9;		
	}
	printf("The frequency of each digit:%d %d %d %d %d %d %d %d %d \n",count_1,count_2,count_3,count_4,count_5,count_6,count_7,count_8,count_9);
	
	return 0;
}
