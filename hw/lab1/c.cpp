#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int n, ans;
vector <int> a;
int main(){
	cin>>n;
	while(n>0){
	a.push_back(n%2);
	n/=2;	
	}
	int ind=1;
	for(int i=(int)a.size()-1; i>=0; i--){
		ans+=ind*a[i];
		ind*=2;
	}
	cout<<ans;
}
