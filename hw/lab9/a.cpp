#include <bits/stdc++.h>
using namespace std;

struct pnts{
	int x, y;
};

int n;
pnts a[2005];

bool cmp(pnts A, pnts B){
	if(A.x==B.x){
		return A.y<B.y;
	}else{
		return A.x<B.x;
	}
}

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i].x>>a[i].y;
	}
	sort(a, a+n, &cmp);
	for(int i=0; i<n; i++){
		cout<<a[i].x<<" "<<a[i].y<<endl;
	}
}
