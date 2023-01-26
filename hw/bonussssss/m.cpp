#include <bits/stdc++.h>
using namespace std;
#define ll long long



string s;
int ans;



int main(){
	cin>>s;
	for(int i=0; i<(int)s.length(); i++){
		ans+=s[i];
	}
	if(ans<300){
		cout<<"Oh, no!";
	}else{
		cout<<"It is tasty!";
	}
}
