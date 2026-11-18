#include<stdio.h>

void shift(int *x,int *y,int *z){
	int temp;
	temp=*z;
	*z=*y;
	*y=*x;
	*x=temp;
}
int main(){
	printf("Name:Daniyal Ali\tRoll No: 26P-3014\n\n");
	int a=5,b=8,c=10;
	printf("Before Circular Shift: x=%d,y=%d,z=%d\n",a,b,c);
	
	shift(&a,&b,&c);
	printf("After Circular Shift: x=%d,y=%d,z=%d\n",a,b,c);
	return 0;
}
