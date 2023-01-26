#include <bits/stdc++.h>
using namespace std;

int n, pr=1, sum;
int main(){
	cin>>n;
	while(n>0){
		pr*=n%10;
		sum+=n%10;
		n/=10;
	}
	cout<<sum+pr;
}
