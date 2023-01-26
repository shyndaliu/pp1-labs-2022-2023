#include <bits/stdc++.h>
using namespace std;

int a2,a1, f;
int main(){
	cin>>a1>>a2>>f;
	if(a1+a2+f>=70 && a1+a2>=30 && f>=20){
		cout<<"YES!";
	}else{
		cout<<"NO.";
	}
}
