#include <bits/stdc++.h>
using namespace std;



int n,x;
string s;
map <string,int> m;
set <string> st;
set <string>:: iterator it;


int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>s>>x;
		m[s]+=x;
		st.insert(s);
	}
	for(it=st.begin(); it!=st.end(); ++it){
		cout<<*it<<" "<<m[*it]<<endl;
	}
}
