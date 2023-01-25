#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,answer;
    int arr[N];
    for(int i = 0;i<N;i++){
        cin>>arr[i];
    }

    for(int i=0;i<N;i++){
        for(int j = N ; j>0;j--)
        {
          if (abs(arr[i]) != abs(arr[j]))
          {
            answer = arr[i];
          }
          
        }
    }
   cout<<answer;
}