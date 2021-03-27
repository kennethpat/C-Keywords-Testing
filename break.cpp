#include <cstdio>
#define ARRSIZE 5

int main()
{
    int arr[ARRSIZE] = {10, 20, 30, 40, 50};
    int pos = -1;
    int searchVal = 40;
    for (int i = 0; i < ARRSIZE; i++)
    {
       if (arr[i] == searchVal)
       {
           pos = i;
           break;
       }
    }
    
    if (pos == -1)
    {
        printf("Unable to find the entry.\n");
    }
    else
    {
        printf("Entry %d is located at position %d.\n", searchVal, pos);
    }
    
    return 0;
}
