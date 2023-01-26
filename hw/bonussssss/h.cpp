#include <bits/stdc++.h>
using namespace std;

struct ph{
	string name;
	double r;
};

bool cmp(ph A, ph B){
	return(A.r<B.r);
}

int n;
string s;
double p, q;
ph a[100005];


int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i].name;
		cin>>p>>q;
		a[i].r=p/q;
		
	}
	sort(a, a+n, &cmp);
	cout<<a[0].name;
}
