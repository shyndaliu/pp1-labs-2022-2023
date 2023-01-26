#include <bits/stdc++.h>
using namespace std;

struct p{
	int x, y, ind;
};

bool cmp(p A, p B){
	if((A.x+A.y)==(B.x+B.y)){
		return A.ind<B.ind;
	}else{
		return((A.x+A.y)<(B.x+B.y)) ;
	}
}
int n;
p a[505];

int main() {
    cin>>n;
    for(int i=0; i<n; i++){
    	cin>>a[i].x>>a[i].y;
    	a[i].ind=i+1;
	}
    sort(a, a+n, &cmp);
    for(int i=0; i<n; i++){
    	cout<<a[i].ind<<" ";
	}
}
