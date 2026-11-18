#include<stdio.h>

void swap(int *a, int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int main(){
	printf("Name:Daniyal Ali\tRoll No: 26P-3014\n");
	int j=2,k=5;
	printf("j=%d , k=%d \n",j,k);
	swap(&j,&k);
	printf("j-%d , k=%d ",j,k);
	return 0;
}
