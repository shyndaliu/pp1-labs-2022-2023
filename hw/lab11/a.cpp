#include <bits/stdc++.h>
using namespace std;
#define ll long long

string s;

int day(string x){
	if(x=="MON"){ 
		return 6;
	}else if(x=="TUE"){
		return 5;
	}else if(x=="WED"){
		return 4;
	}else if(x=="THU"){
		return 3;
	}else if(x=="FRI"){
		return 2;
	}else if(x=="SAT"){
		return 1;
	}else if(x=="SUN"){
		return 7;
	}
}


int main(){
	cin>>s;
	cout<<day(s);
}
