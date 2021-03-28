int main()
{
    int a = 0;
    const int b = a + 1; // allowed
    
    const int c = 0;
    //constexpr int d = a + 1; // not allowed
    constexpr int d = c + 1; // allowed
    
    return 0;
}
