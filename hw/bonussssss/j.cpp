#include <bits/stdc++.h>
using namespace std;

bool isp(string s, int len){
	for(int i=0, j=len-1; i<j; i++, j--){
		if(s[i]!=s[j]){
			return 0;
		}
	}
	return 1;
}
bool all(string s, int len){
	for(int i=1; i<len; i++){
		if(s[i]!=s[i-1]){
			return 1;
		}
	}
	return 0;
}

string s;
int len;


int main(){
	cin>>s;
	len=(int)s.length();
	cout<<(len-isp(s, len))*all(s, len);
}
