//Stack likes the number 33 a lot.

//He has two non-negative integers AA and BB.
//In one operation, Stack can do either of the following:

//A:=|A-B|A:=∣A−B∣ (change AA to |A-B|∣A−B∣)
//B:=|A-B|B:=∣A−B∣ (change BB to |A-B|∣A−B∣)
//Note that |X|∣X∣ denotes absolute value of XX. For example |-7| = 7∣−7∣=7 and |4| = 4∣4∣=4.

//Find the minimum number of operations after which at least one integer out of AA and BB becomes divisible by 33.

#include <stdio.h>

int main(void) 
{
    int a,i,b,x=0;
    scanf("%d",&i);
    while(i)
    {
        scanf("%d %d",&a,&b);
        while(a%3!=0 && b%3!=0)
        {
            if(a>b)
            a-=b;
            else
            b-=a;
            ++x;
        }
        printf("%d\n",x);
        x=0;
        --i;
    }
}

