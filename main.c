#include<stdio.h>
//https://oj.luyencode.net/problem/DPSEQ
int n, k, A[10001], F[10001];

int TimMax(int x, int y){
	if(x<0) x=0;
	int max=F[x];
	for(int i=x+1; i<=y; i++){
		if(F[i]>max) max=F[i];
	}
	return max;
}

int main(){
	scanf("%d%d", &n, &k);
	for(int i=1; i<=n; i++) scanf("%d", &A[i]);

	F[0] = 0;
	for(int i=1; i<=n; i++){
		F[i] = TimMax(i-k, i-1) + A[i];
	}
	printf("%d", TimMax(0, n));
	return 0;
}
