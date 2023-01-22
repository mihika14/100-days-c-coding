#include <bits/stdc++.h>
using namespace std;
int main(){
    int v,w;
    cin >> v >> w;
    float x = (4*v - w)/2;
    int a = w%2;
    if(a == 0 || 2<=w || v<w){
        cout<<"INVALID INPUT";
        return 0;
    }
    else{
        cout<<x<<v-x;
    }

}