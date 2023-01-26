#include <bits/stdc++.h>
using namespace std;
#define ll long long


ll n;
int main(){
	cin>>n;
	vector <int> b;
	while(n>0){
		b.push_back(n%2);
		n/=2;
	}
	for(int i=(int)b.size()-1; i>=0; i--){
		cout<<b[i];
	}
}
