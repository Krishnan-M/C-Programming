//hef has to travel to another place. For this, he can avail any one of two cab services.
//The first cab service charges XX rupees.
//The second cab service charges YY rupees.
//Chef wants to spend the minimum amount of money. Which cab service should Chef take?

#include <stdio.h>

int main(void)
{
    int i,a,b;
    scanf("%d",&i);
    while(i)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
        printf("SECOND\n");
        else if(a==b)
        printf("ANY\n");
        else
        printf("FIRST\n");
        --i;
    }
}

