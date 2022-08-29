//Chef is playing with weights. He has an object weighing WW units. He also has three weights each of X, Y,X,Y, and ZZ units respectively. 
//Help him determine whether he can measure the exact weight of the object with one or more of these weights.
//If it is possible to measure the weight of object with one or more of these weights, print YES, otherwise print NO.

#include <stdio.h>

int main(void) 
{
    int i,w,x,y,z;
    scanf("%d",&i);
    while(i)
    {
        scanf("%d %d %d %d",&w,&x,&y,&z);
        if(w==z||w==x||w==y||w==x+y||w==y+z||w==x+z||w==x+y+z)
        printf("YES\n");
        else
        printf("NO\n");
        i--;
    }
}

