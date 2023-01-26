#include<bits/stdc++.h>
#define ll long long

using namespace std;
ll sum = 0,sm = 0, k = 0, kk = 0, n, m, x, mx = 0;
int main(){
 ll mn = 11, mx = -1, q;
 cin >> n;
 
 ll a[n + 10], b[n + 10];
 for ( int i = 1; i <= n; i++){
  cin >> a[i];
 }
 
 for ( int i = 1; i <= n; i++){
  cin >> b[i];
 }
 cin >> q;
 
 
 for ( int i = 1; i <= n; i++){
  if (a[i] <= q && q <= b[i]){k++;
  }
  }
 
 cout << k;
return 0;
}

//uldanaanananan
