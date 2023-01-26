#include <bits/stdc++.h>
using namespace std;



string s, s1="";
int len;


int main(){
	cin>>s;
	len=(int)s.length();
	int i=0;
	while(i<len){
		if(s[i]=='1' && s[i+1]=='1'){
			i+=2;
		}else{
			string x="a";
			x[0]=s[i];
			s1+=x;
			i++;
		}
	}
	cout<<s1;
}
//01111111111
