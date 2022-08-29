//Alice and Bob were having an argument about which of them is taller than the other. Charlie got irritated by the argument, and decided to settle the matter once and for all//

//Charlie measured the heights of Alice and Bob, and got to know that Alice's height is XX centimeters and Bob's height is YY centimeters. Help Charlie decide who is taller// 

//It is guaranteed that X!=Y//
#include <stdio.h>

int main(void) 
{
    int i,a,b;
    scanf("%d",&i);
    while(i)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
        printf("A\n");
        else
        printf("B\n");
        i--;
    }
}

