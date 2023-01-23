// An intelligence agency has received reports about some threats. The reports consist of numbers in a mysterious method. 
// There is a number “N” and another number “R”. Those numbers are studied thoroughly and it is concluded that all digits of 
// the number ‘N’ are summed up and this action is performed ‘R’ number of times. The resultant is also a single digit that is 
// yet to be deciphered. The task here is to find the single-digit sum of the given number ‘N’ by repeating the action ‘R’ 
// number of times.If the value of ‘R’ is 0, print the output as ‘0’.



#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    int R;
    int sum=0;

    N=N%10;
    sum=sum+N;
    N=N/10;

    v=sum*R;

     v=v%10;
    sum=sum+v;
    v=v/10;

    cout<<v;
}