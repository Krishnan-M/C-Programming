//Chef has scored A, B,A,B, and CC marks in 33 different subjects respectively.
//Chef will fail if the average score of any two subjects is less than 3535. Determine whether Chef will pass or fail.

#include <stdio.h>

int main(void) 
{
    int i,a,b,c;
    scanf("%d",&i);
    while(i)
    {
        scanf("%d %d %d",&a,&b,&c);
        if((a+b)/2 < 35 || (a+c)/2<35 || (b+c)/2<35)
        printf("Fail\n");
        else
        printf("Pass\n");
        --i;
    }
}

