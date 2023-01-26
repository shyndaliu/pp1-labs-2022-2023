#include <bits/stdc++.h>
using namespace std;

string s, t;
int n, m;


int main(){
	cin>>s>>t;
	n=(int)s.length(), m=(int)t.length();
	if(m%n!=0){
		cout<<"NO";
		return 0;
	}
	string s1="";
	for(int i=0; i<m/n; i++){
		s1+=s;
	}
	if(s1==t){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}
