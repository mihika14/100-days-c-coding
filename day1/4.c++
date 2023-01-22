#include <bits/stdc++.h>
using namespace std;

int main(){
    int T , guest_count=0;
    int max_guests = 0;
    int E[] , L[];
    for (int i =0 ; i<n ;i++)
    {
      cin>>E[i];
    }
    for (int i =0 ; i<n ;i++)
    {
      cin>>L[i];
    }
   
   for(int i =0 ; i<T ; i++){
    guest_count += E[i];
    guest_count -= L[i];
    max_guests = max(max_guests, guest_count);
   }

   cout<<max_guests;
}