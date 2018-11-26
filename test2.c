#include<stdio.h>

int main(){
	int sum=0;
	
	printf("1부터 10까지의 합은?");

	for(int i=1;i<11;i++){
	sum = sum+i;
	}

	printf("sum = %d",sum);

	return 0;
}
