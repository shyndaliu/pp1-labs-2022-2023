#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct row{
	int m, sum=0;
	vector <int> b;
	int s(){
		for(int i=0; i<m; i++){
	        sum+=b[i];	
	    }
	    return sum;
    }	
};

bool cmp(row A, row B){
	if(A.s()==B.s()){
		if(A.m==B.m){
			for(int i=0; i<A.m; i++){
				if(A.b[i]==B.b[i]){
					continue;
				}
				return A.b[i]<B.b[i];
			}
		}else{
			return A.m>B.m;
		}
	}else{
		return A.s()<B.s();
	}
}

int n, m, x;
row a[1005];

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i].m;
		for(int j=0; j<a[i].m; j++){
			cin>>x;
			a[i].b.push_back(x);
		}
	}
	sort(a, a+n, &cmp);
	for(int i=0; i<n; i++){
		for(int j=0; j<a[i].m; j++){
			cout<<a[i].b[j]<<" ";
		}
		cout<<endl;
	}
}
