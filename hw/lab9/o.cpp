#include <bits/stdc++.h>
using namespace std;

int n, m;
string x, y;
map <string,string> mp;

int main() {
    cin>>n;
    for(int i=0; i<n; i++){
    	cin>>x>>y;
    	mp[x]=y;
	}
	cin>>m;
	for(int i=0; i<m; i++){
		cin>>x>>y;
		if(mp.count(x)==0){
			cout<<"login error"<<endl;
		}else if(mp[x]==y){
			cout<<"correct password"<<endl;
		}else{
			cout<<"password error"<<endl;
		}
	}
}
