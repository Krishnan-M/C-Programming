
#include <stdio.h>
int main()
{
    test();
}
test()
{
    int l = 1;
    static int s;
    l = ++s;
    printf("%d %d",l,s);
    if(l<=2)
    {
        test();
    }
    printf("%d %d",l,s);
}
 