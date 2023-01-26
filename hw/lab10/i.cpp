#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, a[200005], b[200005];

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
		b[i]=a[i];
	}
	reverse(b, b+n);
	for(int i=0; i<n; i++){
		if(a[i]==b[i]){
			cout<<"OK"<<endl;
		}else{
			cout<<"Instead of "<<a[i]<<" here was "<<b[i]<<endl;
		}
	}
}
