// In the games of football, the winner is awarded 3 points, the loser is not awarded any points and if the match is a draw, both teams get 1 point each. You are given a natural number N from input. In the next N lines there are three numbers W, D, L representing the wins, draws and loses of the specific team respectively. Output the number of points that the team with most points has.

 #include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int max_points=0;
    for(int i=0;i<n;i++){
      int w,d,l;
      cin>>w,d,l;
      int points=3*w+d;
      max_points=max(points,max_points);
    }
    cout<<max_points;
    return 0;
}