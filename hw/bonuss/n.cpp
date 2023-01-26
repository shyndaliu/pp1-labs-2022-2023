#include <bits/stdc++.h>
using namespace std;

int n, a[1000005], b[1000005];

int r(int x){
    vector <int> b;
	while(x>0){
		b.push_back(x%10);
		x/=10;
	}
	int k=1, sum=0;
	for(int i=(int)b.size()-1; i>=0; i--){
		sum+=b[i]*k;
		k*=10;
	}
	return sum;
}

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
		b[i]=r(a[i]);
	}
	for(int i=0, j=n-1; i<j; i++, j--){
		if(a[i]!=b[j] && a[j]!=b[i]){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
}
