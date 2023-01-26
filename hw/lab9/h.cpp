#include <bits/stdc++.h>
using namespace std;



int n;
string s;
map <string,int> m, id;
set <string> st;
set <string>:: iterator it;


int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>s;
		m[s]++;
		if(m[s]==1){
			id[s]=i+1;
		}
		st.insert(s);
	}
	for(it=st.begin(); it!=st.end(); ++it){
		cout<<*it<<" "<<id[*it]<<endl;
	}
}
