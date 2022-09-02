#include <stdio.h>

int main(void) 
{
    int t,x,y,k;
    scanf("%d",&t);
    while(t)
    {
        scanf("%d%d%d",&x,&y,&k);
        if(x%k ==0 && y%k == 0)
        printf("YES\n");
        else
        printf("NO\n");
        t--;
    }
    
}

