#include <cstdio>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    for (auto i : arr)
    {
        printf("Entry is %d\n", i);
    }
    
    int arr2[] = {100, 200};
    auto [x, y] = arr2;
    printf("x is %d\n", x);
    printf("y is %d\n", y);
    
    return 0;
}
