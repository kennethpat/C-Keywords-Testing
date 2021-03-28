#include <cstdio>
 
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 2 or i == 5 or i == 8)
        {
            continue;
        }
        else
        {
            printf("i is: %d\n", i);
        }
    }
    
    return 0;
}
