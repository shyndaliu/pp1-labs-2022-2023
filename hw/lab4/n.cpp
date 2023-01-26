#include <bits/stdc++.h>
using namespace std;

int n, a[1000][1000];

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>a[i][j];
		}
	}
	int ans=a[0][0], ii=0;
	for(int i=0; i<n; i++){
		if(a[i][i]>ans){
			ans=a[i][i];
			ii=i;
		}
	}
	cout<<"Maximum element is: "<<ans<<" with coordinates: "<<ii+1<<";"<<ii+1;
}
