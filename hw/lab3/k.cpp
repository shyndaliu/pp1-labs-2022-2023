#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int a[100005], n;
vector <int> b;

int main(){
	cin>>n>>a[0];
	b.push_back(a[0]);
	for(int i=1; i<n; i++){
		cin>>a[i];
		if(a[i]==a[i-1]){
			continue;
		}
		b.push_back(a[i]);
	}
	for(int i=0; i<b.size(); i++){
		cout<<b[i]<<" ";
	}
}
