#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct teams{
	string name;
	int point;
};


int n, x;
string s, t;
teams a[100005];

bool cmp(teams A, teams B){
	if(A.name==B.name){
		return A.point<B.point;
	}else{
		return A.name<B.name;
	}
}

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		string s1="";
		int p=0;
		cin>>s>>x;
		s1+=s+" and ";
		p+=x;
		cin>>s>>x;
		s1+=s;
		p+=x;
		teams y;
		a[i].name=s1;
		a[i].point=p;
	}
	sort(a, a+n, &cmp);
	cout<<a[0].name<<" "<<a[0].point<<endl;
	for(int i=1; i<n; i++){
		if(a[i].point!=a[i-1].point){
		cout<<a[i].name<<" "<<a[i].point<<endl;	
		}
	}
}
