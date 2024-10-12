#include <stdio.h>
//#include <math.h>
#define MAXN 10005
int n, h[MAXN], f[MAXN];

int min(int a,int b);
int abs(int a);
int chiphi(int i);


int main() {
	scanf("%d",&n);
	for(int i = 1; i <= n; i++) scanf("%d",&h[i]);
		for(int i = 1; i <= n; i++) f[i]=-1;
	printf("%d",chiphi(1));
	return 0;
}

int min(int a,int b){
	if (a<b)
		return a;
	return b;	
}

int abs(int a){
	if (a<0)
		return -a;
	return a;
}

int chiphi(int i){
	if (i==n) return 0;
	if (f[i] != -1) return f[i];
	f[i] = chiphi(i+1) + abs(h[i] - h[i+1]);
	if(i<n-1) 
		f[i] = min(f[i], chiphi(i+2) + abs(h[i] - h[i+2]));
	return f[i];
}
