#include <bits/stdc++.h>
using namespace std;

long long n, a[1005], la, ls, ra, rs;
int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
		if(a[i]%2==0){
			la++;
			ls+=a[i];
		}else{
			ra++;
			rs+=a[i];
		}
	}
	cout<<"Left hand magic power: "<<la*ls<<endl<<"Right hand magic power: "<<ra*rs;
}
