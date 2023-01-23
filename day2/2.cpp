#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,fact=1;
    cin>>N;
    int p=N-2;

    for(int i = 1 ; i <= p+1 ; i++){
        fact = fact*i;
    }
    p=fact*2;
    cout<<p;
}
