#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, k;
set <int> a;
set <int>:: iterator it;

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>k;
		if(k%2==1){
			a.insert(k);
		}
	}
	for(it=a.begin(); it!=a.end(); ++it){
		cout<<*it<<" ";
	}
}
