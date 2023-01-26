#include <bits/stdc++.h>
using namespace std;

string s;
int a,b;

int main(){
	cin>>s;
	for(int i=0; i<(int)s.length(); i++){
		if(s[i]>='A' && s[i]<='Z'){
			a++;
		}else{
			b++;
		}
	}
	cout<<b<<" "<<a;
}
