#include <bits/stdc++.h>
using namespace std;

string a , b;
char c;
bool was[100];


int main(){
	cin>>a>>b>>c;
	for(int i=0; i<(int)b.length(); i++){
		was[b[i]-'a']=1;
	}
	for(int i=0; i<(int)a.length(); i++){
		if(was[a[i]-'a']){
			a[i]=c;
		}
	}
	cout<<a;
}
