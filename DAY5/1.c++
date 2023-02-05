// Your teacher wrote three numbers A, B and C in your notebook. Put mathematical symbols so the operation between the first two numbers equals the third number.
// Given three natural numbers A, B and C from input. Output the wanted equation to the screen. (Use +, -, *, / and =)
#include <iostream>

using namespace std;

int main()
{
    int A,B,C;
    cin>>A>>B>>C;
    
    if(C == A+B)
    {
        cout<<A<<'+'<<B<<'='<<C;
    }
    else if(C == A-B)
    {
        cout<<A<<'-'<<B<<'='<<C;
    }

    else if(C == A*B)
    {
        cout<<A<<'*'<<B<<'='<<C;
    }

    else 
    {
         cout<<A<<'/'<<B<<'='<<C;
    }

}