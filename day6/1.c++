// Given a natural number N. In the next N lines there is only one number in each line. Output the total sum of all of the entered numbers.

 int main()
{
    int x;
    int N;
    cin>>N;
    int arr[N];
    int result = 0;
    for (int i = 1;i  <= N; i++){
        cin>>arr[i];
        result += arr[i];
    }
    cout<<result;
    return 0;
}