#include <bits/stdc++.h>
using namespace std;
#define ll long long

string s;
set <char> a;
set<char>::iterator ik;

int main(){
	cin>>s;
	for(int i=0; i<(int)s.length(); i++){
		s[i]=tolower(s[i]);
		a.insert(s[i]);
	}
	cout<<(int)a.size()<<endl;
	for(ik=a.begin(); ik!=a.end(); ++ik)
        cout<<*ik<<" ";
}
