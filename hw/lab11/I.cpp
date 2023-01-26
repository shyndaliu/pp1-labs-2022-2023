#include <bits/stdc++.h>
using namespace std;
#define ll long long

string s;
int len;
char c[100005];

bool ch(){
	for(int i=0, j=len-1; i<j; i++, j--){
		if(c[i]!=c[j]){
			return 0;
		}
	}
	return 1;
}


int main(){
	cin>>s;
	len=(int)s.length();
	for(int i=0; i<len; i++){
		c[i]=s[i];
	}
	sort(c, c+len);
	do{
		if(ch()==1){
			cout<<"ZA WARUDO TOKI WO TOMARE";
			return 0;
		}
	}while(next_permutation(c, c+len));
	cout<<"JOJO";
}
