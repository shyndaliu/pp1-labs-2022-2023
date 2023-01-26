#include <bits/stdc++.h>
using namespace std;

int n, m, a[100005], t;
int main(){
	cin>>n>>m;
	for(int i=0; i<n*m; i++){
		cin>>a[i];
	}
	cin>>t;
	sort(a, a+n*m);
	if(a[n*m-1]>t){
		cout<<"Penalty!";
	}else{
		cout<<"No penalty for today.";
	}
}
