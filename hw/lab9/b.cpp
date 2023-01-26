#include <bits/stdc++.h>
using namespace std;


int n, x;
multiset <int> a;
multiset <int> b;
multiset<int>:: reverse_iterator it;
multiset<int>:: iterator ik;


int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>x;
		if(x%2==0){
			a.insert(x);
		}else{
			b.insert(x);
		}
	}
	for(it=a.rbegin(); it!=a.rend(); ++it){
		cout<<*it<<" ";
	}
	for(ik=b.begin(); ik!=b.end(); ++ik){
		cout<<*ik<<" ";
	}

}
