//Chef has NN candies. He has to distribute them to exactly MM of his friends such that each friend gets equal number of candies and each friend gets even number of candies.
//Determine whether it is possible to do so.
//NOTE: Chef will not take any candies himself and will distribute all the candies

#include <stdio.h>

int main(void) 
{
    int i,a,b;
    scanf("%d",&i);
    while(i)
    {
        scanf("%d %d",&a,&b);
        if(a%b==0)
            if((a/b)%2==0)
                printf("Yes\n");
            else
                printf("No\n");
        else
            printf("No\n");
        --i;
    }
}