#include<bits//stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin , str);
    int i,a,b;
    for(auto i:str){
        if(i=='#') 
            a++;
        else if(i=='*')
            b++;
    }
    if(b-a > 0){
        cout<<"positive integer";
    }
    else if(b-a == 0){
        cout<<"0";
    }
    else{
        cout<<"negative integer";
    }

}