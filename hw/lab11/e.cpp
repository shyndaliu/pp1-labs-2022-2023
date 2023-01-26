#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, a[50];
string s;


int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>s;
		set <char> st;
		set <char>:: iterator it;
		for(int j=0; j<(int)s.length(); j++){
			st.insert(s[j]);
		}
		for(it=st.begin(); it!=st.end(); ++it){
			a[*it]++;
		}
	}
	int sum=0;
	for(int i='a'; i<='z'; i++){
		if(a[i]==n){
			char c=i;
			cout<<c<<" ";
			sum++;
		}
	}
	if(sum==0){
		cout<<"NO COMMON CHARACTERS";
	}
}
