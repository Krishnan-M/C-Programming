//Karan likes the number 4 very much.
//Impressed by the power of this number, Karan has begun to look for occurrences of four anywhere. 
//He has a list of T integers, for each of them he wants to calculate the number of occurrences of the digit 4 in the decimal representation. 
//He is too busy now, so please help him.

#include <stdio.h>

int main(void) 
{
    int a,i,x=0;
    scanf("%d",&i);
    while(i)
    {
        scanf("%d",&a);
        while(a>0)
        {
            if((a%10)==4)
            ++x;
            a/=10;
        }
        printf("%d\n",x);
        x=0;
        i--;
    }
}

