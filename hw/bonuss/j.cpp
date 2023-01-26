#include <bits/stdc++.h>
using namespace std;

int n, a=-1, b=10;
int main(){
	cin>>n;
	while(n>0){
		a=max(a, n%10);
		b=min(b, n%10);
		n/=10;
	}
	cout<<a<<" "<<b;
}
