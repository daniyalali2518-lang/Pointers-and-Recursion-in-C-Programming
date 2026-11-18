#include <stdio.h>

int sum(int n){
    if (n==1){
        return 1;
    }
    return n+sum(n-1);
}

int main() {
	printf("Name:Daniyal Ali\tRoll No: 26P-3014\n\n");
    int count=25;
    int total=sum(count);
    printf(" The running sum of first 25 natural numbers is : %d \n",total);
    return 0;
}
