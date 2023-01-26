#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, sum;

int main(){
	cin>>n;
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	cout<<sum;
}
