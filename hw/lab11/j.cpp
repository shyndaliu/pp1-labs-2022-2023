#include <bits/stdc++.h>
using namespace std;
#define ll long long

double x, y, c, d;
int n;

struct points{
	double a, b;
	double dis(){
		return (a-x)*(a-x)+(b-y)*(b-y);
	}
};

points k[100005];



bool cmp(points A, points B){
	return A.dis()<B.dis();
}

int main(){
	cin>>x>>y;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>c>>d;
		k[i].a=c;
		k[i].b=d;
	}
	sort(k, k+n, &cmp);
	for(int i=0; i<n; i++){
		cout<<k[i].a<<" "<<k[i].b<<endl;
	}
}
