#include <bits/stdc++.h>
using namespace std;
#define ll long long



string s;
char c;
int x, ans;



int main(){
	cin>>s;
	c=s[0];
	x=1;
	ans=1;
	for(int i=1; i<(int)s.length(); i++){
		if(s[i]==s[i-1]){
			x++;
		}else{
			if(x>ans){
				c=s[i-1];
			}
			ans=max(ans, x);
			x=1;
		}
	}
	if(x>ans){
		c=s[(int)s.length()-1];
	}
	ans=max(ans, x);
	cout<<c<<" "<<ans;
}
