#include <bits/stdc++.h>
using namespace std;

int n;
string s="[*]";

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			cout<<s;
		}
		cout<<endl;
	} 
}
