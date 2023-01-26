#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct pup{
	string name;
	double point;
};

int n;
double x, sum;
string s;
pup a[100005];
map <string, double> mp;
map <string, double>:: iterator it;

bool cmp(pup A, pup B){
	if(A.point==B.point){
		return A.name>B.name;
	}else{
		return A.point>B.point;
	}
}

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>s>>x;
		mp[s]+=x;
		sum+=x;
	}
	int j=0;
	for(it=mp.begin(); it!=mp.end(); ++it){
		a[j].name=it->first;
		a[j].point=it->second;
		j++;
	}
	sort(a, a+j, &cmp);
	for(int i=0; i<j; i++){
		cout<<a[i].name<<" "<<setprecision(6)<<(a[i].point*100)/sum<<"%"<<endl;
	}
}
