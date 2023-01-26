#include <bits/stdc++.h>
using namespace std;
#define ll long long



string s;



int main(){
	cin>>s;
	if((int)s.length()==1){
		if(s[0]=='0'){
			cout<<"false";
		}else if((s[0]=='1')){
			cout<<"true";
		}else{
			cout<<s;
		}
	}else{
		cout<<s;
	}
}
