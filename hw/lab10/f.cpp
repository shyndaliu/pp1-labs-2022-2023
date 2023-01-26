#include <bits/stdc++.h>
using namespace std;
#define ll long long

double getp(double p){
	double a, b;
	if(p>=0.95){
		return 4;
	}else if(p<0.95 && p>=0.9){
		a=11;
		b=3;
		return a/b;
	}else if(p<0.9 && p>=0.85){
		a=10;
		b=3;
		return a/b;
	}else if(p<0.85 && p>=0.8){
		return 3;
	}else if(p<0.8 && p>=0.75){
		a=8;
		b=3;
		return a/b;
	}else if(p<0.75 && p>=0.7){
		a=7;
		b=3;
		return a/b;
	}else if(p<0.7 && p>=0.65){
		return 2;
	}else if(p<0.65 && p>=0.60){
		a=5;
		b=3;
		return a/b;
	}else if(p<0.60 && p>=0.55){
		a=4;
		b=3;
		return a/b;
	}else if(p<0.55 && p>=0.5){
		return 1;
	}else if(p<0.5){
		return 0;
	}
}

struct dis{
	double a1,a2, f, c;
	double getg(){
		if(a1+a2<30 || f<20){
			return 0;
		}
		return getp((a1+a2+f)/100)*c;
	}
};


int n;
double total, ans;
dis a[100005];

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i].a1>>a[i].a2>>a[i].f>>a[i].c;
		total+=a[i].c;
		ans+=a[i].getg();
	}
	cout<<ans/total;
}
