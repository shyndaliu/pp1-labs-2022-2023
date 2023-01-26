#include <bits/stdc++.h>
using namespace std;

int n,nn, a[1000][1000], ii=1, ij=1, cnt=1;
int mod=1;

void m1(int x, int y, int m){
	for(int i=y+1; i<=y+m; i++){
		a[x][i]=cnt;
		cnt++;
		ij=i;
	}
	ii=x;
}

void m2(int x, int y, int m){
	for(int i=x+1; i<=x+m; i++){
		a[i][y]=cnt;
		cnt++;
		ii=i;
	}
	ij=y;
}
void m3(int x, int y, int m){
	for(int i=y-1; i>=y-m; i--){
		a[x][i]=cnt;
		cnt++;
		ij=i;
	}
	ii=x;
}
void m4(int x, int y, int m){
	for(int i=x-1; i>=x-m; i--){
		a[i][y]=cnt;
		cnt++;
		ii=i;
	}
	ij=y;
}

void solve(){
	if(mod%4==1){
		m2(ii, ij, nn);
	}else if(mod%4==2){
		m3(ii, ij, nn);
	}else if(mod%4==3){
		m4(ii, ij, nn);
	}else{
		m1(ii, ij, nn);
	}
	mod++;
}

int main(){
	cin>>n;
	for(int i=1; i<=n; i++){
		a[1][i]=cnt;
		ij=i;
		cnt++;
	}
	nn=n-1;
	while(cnt<=n*n){
		solve();
		solve();
		nn--;
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
