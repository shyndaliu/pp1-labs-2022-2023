#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int i= 0;
    while(n>0){
        if(i%7==0){
            i++;
            continue;
        }

        if(i % 2 == 1){
            n+=3;
        }else if(i % 2 == 0){
            n-=4;
        }
        i++;
    }

    cout << i;
}
