#include <bits/stdc++.h>
using namespace std;

int a[3], b[3], sum, cash;
int main(){
	for(int i=0; i<3; i++){
		cin>>a[i];
	}
	for(int i=0; i<3; i++){
		cin>>b[i];
		sum+=a[i]*b[i];
	}
	cin>>cash;
	if(cash>=sum){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
}
