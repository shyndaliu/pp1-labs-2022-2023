#include <bits/stdc++.h>
using namespace std;

int a[3];

int main(){
	cin>>a[0]>>a[1]>>a[2];
	sort(a, a+3);
	reverse(a, a+3);
	for(int i=0; i<3; i++){
		cout<<a[i]<<" ";
	}
}
