#include <bits/stdc++.h>
using namespace std;
#define ll long long



string s, x="moc.liamg@";
int len;

bool ch(){
	int j=0;
	for(int i=len-1; i>=len-10; i--){
		if(s[i]!=x[j]){
			return 0;
		}
		j++;
	}
	return 1;
}

int main(){
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>s;
		len=(int)s.length();
		if(ch()){
			string s1=s.substr(0, len-10);
			cout<<s1<<endl;
		}
	}
}
