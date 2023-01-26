#include <bits/stdc++.h>
using namespace std;
#define ll long long


int n, m;
double sum, x;
map <string, double> mp;
map <string, double>:: iterator it;
string s;

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>m;
		for(int j=0; j<m; j++){
			cin>>s>>x;
			mp[s]+=x;
			sum+=x;
		}
	}
	for(it=mp.begin(); it!=mp.end(); ++it){
		cout<<it->first<<" "<<setprecision(6)<<(it->second)*100/sum<<endl;
	}
}
