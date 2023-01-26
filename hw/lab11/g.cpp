#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, x;
string s;
set <int> a[100005];
map <string, int> mp;
map <string, int>::iterator it;

void add(int x, int y){
	a[x].insert(y);
}


int main(){
	cin>>n;
	int j=0;
	for(int i=0; i<n; i++){
		cin>>s>>x;
		if(mp.count(s)==0){
		    mp[s]=j;
		    add(j,x);
		    j++;	
		}else{
			add(mp[s], x);
		}
	}
	for(it=mp.begin(); it!=mp.end(); ++it){
		cout<<it->first<<" ";
		if(a[it->second].size()<3){
			cout<<"NO BONUS"<<endl;
		}else{
			cout<<"+"<<a[it->second].size()/3<<endl;
		}
	}
}
