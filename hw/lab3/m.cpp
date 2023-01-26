#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll sum;
string s;

int main(){
	getline(cin, s);
	ll ind=1;
	for(int i=(int)s.length()-1; i>=0; i--){
		if(s[i]>='0' && s[i]<='9'){
			sum+=(s[i]-'0')*ind;
			ind*=10;
		}else{
			ind=1;
		}
	}
	cout<<sum;
}
