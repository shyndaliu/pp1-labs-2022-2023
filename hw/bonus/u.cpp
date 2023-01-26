#include <bits/stdc++.h>
using namespace std;

double n, m;
int i=1;
int main(){
	cin>>n>>m;
	while(n<m){
		n*=1.1;
		i++;
	}
	cout<<i;
}
