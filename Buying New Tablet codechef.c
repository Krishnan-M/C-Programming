//Chef decided to buy a new tablet. His budget is BB, so he cannot buy a tablet whose price is greater than BB. Other than that, he only has one criterion — the area of the tablet's screen should be as large as possible. Of course, the screen of a tablet is always a rectangle.

//Chef has visited some tablet shops and listed all of his options. In total, there are NN available tablets, numbered 11 through NN. For each valid ii, the ii-th tablet has width W_iW 
 //eight H_iH 
 //and price P_iP 

//Help Chef choose a tablet which he should buy and find the area of such a tablet's screen, or determine that he cannot buy any tablet.

#include <stdio.h>

int main(void) 
{
    int i,a,b,c,j,k,si,is=0;
    scanf("%d",&i);
    while(i)
    {
        scanf("%d %d",&j,&k);
        while(j)
        {
            scanf("%d %d %d",&a,&b,&c);
            if(k>=c)
            {
                si=a*b;
            }
            if(si>is)
            {
                is=si;
            }
            --j;
        }
        if(is==0)
        printf("no tablet\n");
        else
        printf("%d\n",is);
        si=0;
        is=0;
        --i;
    }
}
