// If you have N money and you want to buy gifts for your friends. The store nearby sells the gift for a price of A dollars, but the store further sells them for less, B dollars (A > B). Calculate how many more gifts you can buy if you go to the store further away.Given three natural numbers N, A and B from input. Return how many more gifts you can buy for a price of B dollars instead of price of A dollars.

 int gifts(int n, int a, int b)
{
    int x,y,w;
    x=n/a;
    y=n/b;
    w=y-x;
    return w;
}