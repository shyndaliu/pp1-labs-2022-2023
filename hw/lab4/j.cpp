#include <bits/stdc++.h>
using namespace std;

int n, m, a;

int main(){
	cin>>n>>m;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a;
			if((i+j)%2==0){
				cout<<a+1<<" ";
			}else{
				cout<<a-1<<" ";
			}
		}
		cout<<endl;
	} 
}
