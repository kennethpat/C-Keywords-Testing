// "bitor" is used as an alternative for |
#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    bitset<4> a("1100");
    bitset<4> b("0111");
    bitset<4> c = a bitor b;
    cout << "a is " << a << '\n';
    cout << "b is " << b << '\n';
    cout << "c is " << c << '\n';
    
    return 0;
}
