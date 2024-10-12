#include <stdio.h>
int main(){
	long M[]={5,1000,5000,10000,50000,100000};
	long N;
	int k=0;
	scanf("%ld",&N);
	N=500000-N;
	for(int i=M[0];i>=1;i--){
		k=k+N/M[i];
		N=N%M[i];
	}
	printf("%d",k);
	return 0;
}
