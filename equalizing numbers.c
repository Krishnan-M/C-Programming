//Chef has two integers AA and BB. In one operation he can choose any integer d,d, and make one of the following two moves :
//Add dd to AA and subtract dd from BB.
//Add dd to BB and subtract dd from AA.
//Chef is allowed to make as many operations as he wants. Can he make AA and BB equal?

#include <stdio.h>
int a();
int main(void) 
{
    int i,a,b;
    scanf("%d",&i);
    while(i)
    {
        scanf("%d %d",&a,&b);
        if((a+b)%2 == 0)
        printf("Yes\n");
        else
        printf("No\n");
        i--;
    }
}

