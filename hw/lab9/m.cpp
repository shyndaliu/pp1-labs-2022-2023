#include <bits/stdc++.h>
using namespace std;

int n, x;
string s;
queue <string> q;

int main() {
    cin>>n;
    for(int i=0; i<n; i++){
    	cin>>x;
    	if(x==1){
    		cin>>s;
    		q.push(s);
		}else{
			q.pop();
		}
		if(q.empty()==0){
			cout<<q.front()<<endl;
		}else{
			cout<<"queue is empty"<<endl;
		}
	}
}
