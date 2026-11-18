#include <stdio.h>

int GCD(int j,int k){
    if (k==0){
        return j;
    }
    int quot=j/k;
    int remain=j-quot*k;
    
    return GCD(k,remain);
}

int main(){
	printf("Name:Daniyal Ali\tRoll No: 26P-3014\n\n");
    int J=1980,K=1617;
    int gcd=GCD(J,K);
    printf("The greatest common divisor is: %d\n",gcd);
    return 0;
}
