// "and" is used as an alternative for &&
#include <cstdio>

int main()
{
    int x = 0;
    while (x >= 0 and x <= 5)
    {
        printf("x is %d\n", x);
        x++;
    }
    
    return 0;
}
