#include <bits/stdc++.h>
using namespace std;

int n, a, d, sum;
int main(){
	cin>>n>>a>>d;
	for(int i=1; i<=n; i++){
		cout<<a<<" ";
		sum+=a;
		a+=d;
	}
	cout<<endl<<"sum: "<<sum;
}
