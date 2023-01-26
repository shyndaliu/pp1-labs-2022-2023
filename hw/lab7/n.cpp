#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, k;
char c[50];
vector <char> b;



int main(){
	cin>>n>>k;
	for(int i=0; i<10; i++){
		c[i]=i+'0';
	}
	for(int i=0; i<27; i++){
		c[i+10]=i+'A';
	}
	while(n>0){
		b.push_back(c[n%k]);
		n/=k;
	}
	for(int i=b.size()-1; i>=0; i--){
		cout<<b[i];
	}
}
