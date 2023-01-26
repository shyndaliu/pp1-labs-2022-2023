#include <bits/stdc++.h>
using namespace std;

int n, x;
int main(){
	cin>>n;
	while(n--){
		cin>>x;
		int sum=0;
		while(x>0){
			sum+=x%10;
			x/=10;
		}
		if(sum%2==0){
			cout<<"Sum of digits is even!"<<endl;
		}else{
			cout<<"Sum of digits is odd!"<<endl;
		}
	}
}
