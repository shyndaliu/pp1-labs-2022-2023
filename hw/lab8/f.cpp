#include <bits/stdc++.h>
using namespace std;

int n, a;
vector <int> b;
int l,r;

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a;
		b.push_back(a);
	}
	cin>>l>>r;
	b.insert(b.begin()+l, r);
	for(int i=0; i<(int)b.size(); i++){
		cout<<b[i]<<" ";
	}
}
