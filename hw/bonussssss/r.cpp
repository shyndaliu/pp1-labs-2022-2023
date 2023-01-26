#include <bits/stdc++.h>
using namespace std;
#define ll long long



string s;
char c;
vector <int> v;

int main(){
	cin>>s>>c;
	for(int i=0; i<(int)s.length(); i++){
		if(s[i]==c){
			v.push_back(i);
		}
	}
	if((int)v.size()==0){
		return 0;
	}
	if((int)v.size()==1){
		cout<<v[0];
		return 0;
	}
	if((int)v.size()>1){
		cout<<v[0]<<" "<<v[(int)v.size()-1];
		return 0;
	}
}
