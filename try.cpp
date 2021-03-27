#include <cstdio>
using namespace std;
 
int main()
{
    int a = 10;
    try
    {
        throw &a;
    }
    catch (char* c)
    {
        printf("Caught char: %c\n", *c);
    }
    catch (int* i)
    {
        printf("Caught int: %d\n", *i);
    }
    catch (...)
    {
        printf("Default Exception\n");
    }
    
    return 0;
}
