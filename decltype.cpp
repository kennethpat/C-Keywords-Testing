#include <cstdio>

int main()
{
    int x = 5;
    decltype(x) y = 5;
    printf("x is %d\n", x);
    printf("y is %d\n", y);
    
    return 0;
}
