#include <bits/stdc++.h>
using namespace std;

string s;
int l,r;

int main(){
	cin>>s>>l>>r;
	cout<<s.substr(l, r-l+1);
}
