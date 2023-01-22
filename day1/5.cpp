#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N = 10, K = 5;
    int M;
    cin >> M;

    if (M >= 1 && M<=5)
    {
        cout << M << "" << N - M;
        
    }
    else
    {
        cout << "INVALID INPUT";
    }
}