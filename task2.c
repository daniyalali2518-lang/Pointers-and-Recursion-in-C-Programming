#include<stdio.h>
int main(){
	printf("Name:Daniyal Ali\tRoll No: 26P-3014\n");
	int a=10;
	int *ptr=&a;
	int **ptr2=&ptr;
	printf("Actual valur=%d\n",a);
	
	**ptr2=25;
	printf("Change The Value=%d",a);
	return 0;
}
