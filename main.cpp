//https://luyencode.net/problem/thuhoach
#include<bits/stdc++.h>
using namespace std;

int n, c, W[50001], F[21][50001];

int main(){
	cin >> n >> c;
	
	for(int i=1; i<=n; i++) cin >> W[i]; 
	
	for(int i=0; i<=n; i++) F[i][0] = 0;
	for(int i=0; i<=c; i++) F[0][i] = 0;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=c; j++){
			if(W[i] > j){
				F[i][j] = F[i-1][j];
			} else {
				F[i][j] = max(F[i-1][j], F[i-1][j-W[i]] + W[i]);
			}
		}
	}
	cout << F[n][c];
	return 0;
}
