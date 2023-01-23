#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;

    int a[N];
    for (int i = 0; i < N; i++) {
       cin >> a[i];
    }

    int D;
    cin >> D;

    int X;
    cin >> X;

    int fine = 0; 
    for (int i = 0; i < N; i++) {
        if ((a[i] % 2 != D % 2) && (a[i] != 0)) {
            fine =fine+X;
        }
    }
    cout<<fine;
    return 0;
}

  
