#include <bits/stdc++.h>
using namespace std;


int n, ans;
string s;
map <string, int> m;
map <string, int> :: iterator it;

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>s;
		m[s]++;
	}
	for(it=m.begin(); it!=m.end(); ++it){
		if(it->second==3){
			ans++;
		}
	}
	cout<<ans;
}
