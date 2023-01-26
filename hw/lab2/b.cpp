#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
	cin>>n;
	if(n%2==1){
		cout<<"Super";
		return 0;
	}
	if(n>=6 && n<=20){
		cout<<"Super";
	}else{
		cout<<"Not Super";
	}
}
