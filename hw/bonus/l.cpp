#include <bits/stdc++.h>
using namespace std;

double n, sum;
int  i;
int main(){
	cin>>n;
	while(sum<=500000){
		sum+=n*0.3;
		n*=1.1;
		i++;
	}
	cout<<i;
}
