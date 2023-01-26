#include <bits/stdc++.h>
using namespace std;

int a,b,c;
int main(){
	cin>>a>>b>>c;
	if(a<b+c && b<a+c && c<a+b){
		cout<<"Valid";
	}else{
		cout<<"Invalid";
	}
}
