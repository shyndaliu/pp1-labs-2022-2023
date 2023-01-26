#include <bits/stdc++.h>
using namespace std;

int n, a[100005];
string s[100005];

int main() {
    cin>>n;
    for(int i=0; i<n; i++){
    	cin>>s[i]>>a[i];
	}
	sort(a, a+n);
	sort(s,s+n);
	for(int i=0; i<n; i++){
		cout<<s[i]<<" "<<a[i]<<endl;
	}
}
