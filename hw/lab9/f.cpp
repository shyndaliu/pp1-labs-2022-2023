#include <bits/stdc++.h>
using namespace std;



string s;
int len;
int x,y;


int main(){
	cin>>s;
	len=(int)s.length();
	if(s[0]==')' || s[len-1]=='('){
		cout<<"NO";
		return 0;
	}
	for(int i=0; i<len; i++){
		if(s[i]=='('){
			x++;
		}
		if(s[i]==')'){
			y++;
		}
	}
	if(x!=y){
		cout<<"NO";
		return 0;
	}
	cout<<"YES";
}
