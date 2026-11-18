#include <stdio.h>

void fibonacci(int a,int b,int count){
    if (count==0){
        return;
	}
    printf("%d ",a);
    fibonacci(b,a + b,count-1);
}

int main(){
	printf("Name:Daniyal Ali\tRoll No: 26P-3014\n\n");
    printf("First 25 numbers of the fibonacci sequence: \n");
    fibonacci(1,1,25);
    printf("\n");
    return 0;
}
