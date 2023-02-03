// You have 4 kids. Your neighbor comes at your door and gives you N (N > 4) apples. You want to divide them equally among your children, so if the number isn't divisible with 4, you need to buy more apples. An apple costs 1$, output how many dollar you'll spend to split them among your kids. You should spend as less as possible.
int apples(int n) {
    int x;
    
    if(n%4 != 0)
    {
        x++;
        x=n%4;
    }
    else
   {
      x=0;
   }  
   return x;
     
    
}