#include <cstdio>
 
int main()
{
    const int x = 10;
    const int *y = &x;
    printf("y is %d\n", *y);
    int *z = const_cast<int *>(y); // allowed
    //int *z = y; // not allowed
    //int *z = &y; // not allowed
    *z = 20;
    printf("y is %d\n", *y);
    
    return 0;
}
