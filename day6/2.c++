//FIBONACCI SERIES

#include <iostream>

using namespace std;

int main()
{
    int N,n3;
    int n1=0;
    int n2=1;
    cin>>N;
    for(int i=2 ; i<N ; ++i)
    {
        n3=n1+n2;
        cout<<n1<<" "<<n3<<" ";
        n1=n2;
        n2=n3;
    }
    
    
    return 0;
}