#include <bits/stdc++.h>
using namespace std;

int n, a;
vector <int> b;
int k;

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a;
		b.push_back(a);
	}
	cin>>k;
	b.erase(b.begin()+k);
	for(int i=0; i<(int)b.size(); i++){
		cout<<b[i]<<" ";
	}
}
