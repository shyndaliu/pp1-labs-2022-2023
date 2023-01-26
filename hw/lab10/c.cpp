#include <bits/stdc++.h>
using namespace std;
#define ll long long

string s;
int n;
stack <char> st1, st2;

bool ch(char x, char y){
	int a=(x-'0')*10+(y-'0');
	int b=sqrt(a);
	if(b*b==a){
		return 1;
	}else{
		return 0;
	}
}

void solve(){
	while(st1.size()!=0 && st2.size()!=0){
		while(st1.size()!=0){
		if(st2.size()==0){
    		st2.push(st1.top());
    		st1.pop();
    		continue;
		}
		char c=st2.top(), d=st1.top();
		if(ch(d, c)==1){
			st2.pop();
		}else{
			st2.push(d);
			st1.pop();
		}
	    }
	    if(n==st2.size()){
	    	return;
		}
		n=st2.size();
		while(st2.size()!=0){
		if(st1.size()==0){
    		st1.push(st2.top());
    		st2.pop();
    		continue;
		}
		char c=st2.top(), d=st1.top();
		if(ch(d, c)==1){
			st1.pop();
		}else{
			st1.push(c);
			st2.pop();
		}
	    }
	    if(n==st1.size()){
	    	return;
		}
		n=st1.size();
	}
}



int main() {
    cin>>s;
    n=(int)s.length();
    for(int i=0; i<n; i++){
    	if(st1.size()==0){
    		st1.push(s[i]);
    		continue;
		}
		char c=st1.top();
		if(ch(c, s[i])==1){
			st1.pop();
		}else{
			st1.push(s[i]);
		}
	}
	if(n>st1.size()){
		solve();
	}
	if(st1.size()==0 && st2.size()==0){
		cout<<"Stack is empty";
		return 0;
	}
	while(st2.size()!=0){
		cout<<st2.top();
		st2.pop();
	}
	while(st1.size()!=0){
		cout<<st1.top();
		st1.pop();
	}
}
