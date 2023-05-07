#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    // bitwise operation method
    if(n&1) cout<<"Odd";
    else cout<<"Even";

    return 0;
}