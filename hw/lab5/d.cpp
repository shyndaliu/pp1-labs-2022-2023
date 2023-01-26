#include <bits/stdc++.h>
using namespace std;

string s;
bool ch(string t){
	for(int i=0, j=(int)t.length()-1; i<j; i++, j--){
		if(t[i]!=t[j]){
			return 0;
		}
	}
	return 1;
}

int main(){
	cin>>s;
	if(ch(s)==1){
		cout<<"YES";
	}else{
	    cout<<"NO";
}
}
