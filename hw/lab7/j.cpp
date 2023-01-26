#include <bits/stdc++.h>
using namespace std;
#define ll long long

string s;
int sum;

int main(){
	cin>>s;
	for(int i=0; i<(int)s.length(); i++){
		sum+=(s[i]-'0')/2;
	}
	cout<<sum;
}
