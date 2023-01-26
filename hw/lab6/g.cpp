#include <bits/stdc++.h>
using namespace std;

string s;

bool ch(char c){
	if(c>='a' && c<='z'){
		if(c=='a' || c=='e' || c=='i'|| c=='o' || c=='u'){
			return 0;
		}else{
			return 1;
		}
	}else if(c>='A' && c<='Z'){
		if(c=='A' || c=='E' || c=='I'|| c=='O' || c=='U'){
			return 0;
		}else{
			return 1;
		}
	}else{
		return 1;
	}
}

int main(){
	getline(cin, s);
	string s1="";
	string x="a";
	for(int i=0; i<(int)s.length(); i++){
		if(ch(s[i])==1){
		x[0]=s[i];
		s1+=x;	
		}
	}
	cout<<s1;
}
