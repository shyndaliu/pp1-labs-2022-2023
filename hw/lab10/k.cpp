#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, x, sum;

bool ch(int a){
	for(int i=2; i<a; i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>x;
		if(x==0 || x==1 || x==-1){
			continue;
		}else if(x<0){
			sum+=ch(-1*x);
		}else{
			sum+=ch(x);
		}
	}
	
	cout<<sum;
}
