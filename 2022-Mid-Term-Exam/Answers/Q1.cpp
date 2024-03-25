#include <iostream>
using namespace std;
int main()
{
    int x = 10; // initalize x = 10
    for (int i = 3; i > 1; --i)
        x += x--;
    /*
    first loop
    {x+= x--} ====> {10 += 10} ==> (x=20) / {x--} ==> (x = 20-1 = 19) 
    second loop
    {x+= x--} ====> {19 += 19} ==> (x=38) / {x--} ==> (x = 38 - 1 = 37)
    */ 
    cout << x;
    return 0;
}