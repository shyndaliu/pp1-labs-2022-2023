#include <bits/stdc++.h>
using namespace std;

int x, y, x2, y2, X, Y;

int main(){
	cin>>x>>y>>x2>>y2>>X>>Y;
	if(min(x, x2)<=X && X<=max(x, x2) && min(y, y2)<=Y && Y<=max(y, y2)){
		cout<<"yes";
	}else{
		cout<<"no";
	}
}
