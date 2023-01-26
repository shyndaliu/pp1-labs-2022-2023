#include <bits/stdc++.h>
using namespace std;
#define ll long long

unsigned long long n, ans=1;

int a[27], b[27], c[27];

void solve(int x){
	int l=x/10, r=x%10;
	for(int i=0; i<27; i++){
		b[i]=0;
		c[i]=0;
	}
	for(int i=26; i>0; i--){
		b[i]+=a[i]*r;
		b[i-1]+=b[i]/10;
		b[i]%=10;
	}
	for(int i=25; i>0; i--){
		c[i]+=a[i+1]*l;
		c[i-1]+=c[i]/10;
		c[i]%=10;
	}
	for(int i=0; i<27; i++){
		a[i]=0;
	}
	for(int i=27; i>=0; i--){
		a[i]+=b[i]+c[i];
		a[i-1]+=a[i]/10;
		a[i]%=10;
	}
}

int main(){
	cin>>n;
	if(n<=20){
	    for(int i=1; i<=n; i++){
		    ans*=i;
	    }
	    cout<<ans;
	    return 0;
	}
	for(int i=1; i<=20; i++){
		ans*=i;
	}
	int j=26;
	while(ans>0){
		a[j]=ans%10;
		ans/=10;
		j--;
	}
	for(int i=21; i<=n; i++){
		solve(i);
	}
	int k;
	while(a[k]<1){
		k++;
	}
	for(int i=k; i<27; i++){
		cout<<a[i];
	}
}
//2432902008176640000
