#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, k;

int main(){
	cin>>n;
	for(int i=2; i<n; i++){
		if(n%i==0){
			cout<<"No";
			return 0;
		}
	}
	cout<<"Yes";
}
