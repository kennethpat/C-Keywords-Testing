// "and_eq" as an alternative for &=
#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    bitset<4> a("1100");
    bitset<4> b("0111");
    a and_eq b;
    cout << "a is " << a << '\n';
    cout << "b is " << b << '\n';
    
    return 0;
}
