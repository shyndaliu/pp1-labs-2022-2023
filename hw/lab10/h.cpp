#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct vr{
	int x, ind;
};

int n, b[200005];
vr a[200005];

bool cmp1(vr A, vr B){
	return A.x<B.x;
}
bool cmp2(vr A, vr B){
	return A.ind<B.ind;
}


int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i].x;
		a[i].ind=i;
	}
	sort(a, a+n, &cmp1);
	for(int i=1; i<n; i++){
		if(a[i].x==a[i-1].x){
			a[i].ind=-1;
		}
	}
	sort(a, a+n, &cmp2);
	int j=0;
	while(a[j].ind<0){
		j++;
	}
	for(int i=j; i<n; i++){
		b[i-j]=a[i].x;
	}
	do{
		for(int i=0; i<n-j; i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}while(next_permutation(b, b+n-j));
}
