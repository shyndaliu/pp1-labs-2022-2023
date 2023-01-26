#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct N{
    int X, H;
};

N p(int X, int H){
	N a;
	a.X=X;
	a.H=H;
	return a;
}

stack<N> s;

int main() {
    
    int h, n, i;
    long res;
    scanf("%d", &n);
    s.push(p(0, 0));

    
    for (res = 0, i = 1; i <= n + 1; i++){
        if (i <= n) scanf("%d", &h);
        else h = 0;
        int x = i;
        while (h < s.top().H){
            x = s.top().X;
            int Height = s.top().H;
            s.pop();
            long area = 1L * Height * (i - x);
            if (area > res) res = area;
        }
        if (h > s.top().H) s.push(p(x, h));
    }
    printf("%ld\n", res);
    return 0;
}
