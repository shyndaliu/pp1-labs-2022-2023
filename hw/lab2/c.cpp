#include <bits/stdc++.h>
using namespace std;

int n, k;

int main(){
	cin>>n>>k;
	if(n<k){
		cout<<2;
		return 0;
	}
	cout<<(n*2+k-1)/k;
}
