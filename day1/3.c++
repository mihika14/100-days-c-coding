// Given an integer array Arr of size N the task is to find the count of elements whose value is
// greater than all of its prior elements

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            count++;
        }
    }
    cout << count;
}
