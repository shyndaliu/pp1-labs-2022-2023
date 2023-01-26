#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, m, x;
vector <int> a, b, c;
vector <int>::iterator it;

int main(){
	cin>>n>>m;
	for(int i=0; i<n; i++){
		cin>>x;
		a.push_back(x);
	}
	for(int i=0; i<m; i++){
		cin>>x;
		b.push_back(x);
	}
	it =unique(a.begin(), a.end());
	a.erase(it,a.end());
	it =unique(b.begin(), b.end());
	b.erase(it, b.end());
	/*for(int i=0; i<(int)a.size(); i++){
		cout<<a[i]<<" ";
	}
	for(int i=0; i<(int)b.size(); i++){
		cout<<b[i]<<" ";
	}*/
	int j=0, k=0;
	for(int i=0; i<(int)b.size()+(int)a.size(); i++){
		if(i%2==0){
			c.push_back(a[j]);
			j++;
		}else{
			c.push_back(b[k]);
			k++;
		}
	}
	it=unique(c.begin(), c.end());
	c.erase(it, c.end());
	for(int i=0; i<(int)c.size(); i++){
		cout<<c[i]<<" ";
	}
}
