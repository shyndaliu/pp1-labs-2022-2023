#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll sum, n;

int main(){
	while(true){
		cin>>n;
		sum+=n;
		if(n==0){
			cout<<sum;
			return 0;
		}
	}
}
