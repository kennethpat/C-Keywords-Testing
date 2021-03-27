#include <cstdio>
 
int main()
{
    int x = 0;
    const int y = 0;
    x++; // allowed
    // y++; // not allowed
    printf("x is %d\n", x);
    printf("y is %d\n", y);
    
    return 0;
}
