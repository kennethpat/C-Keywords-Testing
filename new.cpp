#include <cstdio>
#define ARRSIZE 5

int main()
{
    int *x = new int(5);
    printf("x is %d\n", *x);
    delete x;
    
    int *arr = new int[ARRSIZE];
    for (int i = 0; i < ARRSIZE; i++)
    {
        *(arr + i) = 10 * (i + 1);
        printf("Value is %d\n", *(arr + i));
    }
    delete [] arr;
    
    return 0;
}
