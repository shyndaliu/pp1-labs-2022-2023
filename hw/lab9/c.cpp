#include <bits/stdc++.h>
using namespace std;


int n, a[1005], ans, d[1005];
int b[10005];


int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	sort(a,a+n);
	d[0]=0;
	for(int i=1; i<n; i++){
		if(a[i]!=a[i-1]){
			d[i]=d[i-1]+1;
		}else{
			d[i]=d[i-1];
		}
	}
	for(int i=0; i<n; i++){
		b[d[i]]++;
	}
	for(int i=0; i<1005; i++){
		ans+=1*(b[i]>1);
	}
	cout<<ans;
}
