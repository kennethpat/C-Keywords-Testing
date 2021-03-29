#include <cstdio>

class Rect
{
private:
    int length;
    int width;
    
public:
    Rect()
    {
        length = 0;
        width = 0;
    }
    Rect(int l, int w)
    {
        length = l;
        width = w;
    }
    int getLength()
    {
        return length;
    }
    int getWidth()
    {
        return width;
    }
    int getCircumference()
    {
        return (2 * (length + width));
    }
    int getArea()
    {
        return (length * width);
    }
    ~Rect() { }
};
 
int main()
{
    Rect r = Rect(5, 2);
    printf("The circumference is %d\n", r.getCircumference());
    printf("The area is %d\n", r.getArea());
    
    return 0;
}
