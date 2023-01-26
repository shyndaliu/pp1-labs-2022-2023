#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int a,b;

int main(){
	cin>>a>>b;
	a+=b%10;
	a+=b/100;
	cout<<a;
}
