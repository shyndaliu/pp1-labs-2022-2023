#include <bits/stdc++.h>
using namespace std;

struct vr{
	int x, ind;
};

int n, ans;
vr a[505];
map <int, bool> mp;


int main() {
    cin>>n;
    for(int i=0; i<n; i++){
    	cin>>a[i].x;
    	a[i].ind=i;
    	mp[a[i].x]=true;
	}
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			int k=a[i].x^a[j].x;
			if(mp[k]==1){
				ans++;
			}
		}
	}
	cout<<ans;
	
}
