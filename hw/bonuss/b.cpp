#include <bits/stdc++.h>
using namespace std;

int n, k, m, sum, a[105][105];
 
int main(){
    cin>>n>>m;  
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            a[i][j]=1;
        }
    }
    cin >>k;
    int x1,y1,x2,y2;
    for(int s=0;s<k;s++){
        cin >> x1 >> y1 >> x2 >> y2;
        for(int i=y1;i<y2;i++){ 
            for(int j=x1;j<x2;j++){
                a[i][j]=0;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum+=a[i][j];
        }
    }
    cout << sum;
}
