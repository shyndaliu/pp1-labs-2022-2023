#include <bits/stdc++.h>
using namespace std;

string s;
int n;

bool ch1(){
	for(int i=0, j=n-2; i<j; i++, j--){
		if(s[i]!=s[j]){
			return 0;
		}
	}
	return 1;
}
bool ch2(int x){
	int i=0, j=n-1;
	while(i<j){
		if(i==x){
			j--;
		}
		if(j==x){
			i++;
		}
		if(s[i]!=s[j]){
			return 0;
		}
		i++, j--;
	}
	return 1;
}

int main(){
	cin>>s;
	n=(int)s.length();
	if(n<3){
		cout<<"YES";
		return 0;
	}
	if(ch1()==1){
		cout<<"YES";
		return 0;
	}
	for(int i=0; i<n; i++){
		if(ch2(i)==1){
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
}
