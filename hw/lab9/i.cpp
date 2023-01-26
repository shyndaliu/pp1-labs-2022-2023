#include <bits/stdc++.h>
using namespace std;



int n;
string s;
map <string,int> m;


int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>s;
		m[s]++;
		if(m[s]==1){
			cout<<"new user added"<<endl;
		}else{
			cout<<"user already exists"<<endl;
		}
	}
}
