#include <bits/stdc++.h>
using namespace std;
#define ll long long

int a, b, k, j;


int main(){
	cin>>a>>b>>k;
	for(int i=(min(a,b)); i>=0; i--){
		if(a%i==0 && b%i==0){
			j++;
		}
		if(j==k){
			cout<<i;
			return 0;
		}
	}
}
