#include <bits/stdc++.h>
using namespace std;

string s;
int a[20];

int main(){
	cin>>s;
	for(int i=0; i<(int)s.length(); i++){
		a[s[i]-'0']++;
	}
	sort(a, a+10);
	for(int i=8; i>=0; i--){
		if(a[i]!=a[i+1] && a[i]>0 && a[i+1]>0){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
}
